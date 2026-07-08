import mujoco
import mujoco.viewer
import time
from robot_descriptions import g1_mj_description

model = mujoco.MjModel.from_xml_path(g1_mj_description.MJCF_PATH)
data = mujoco.MjData(model)

# print(f"模型自由度(nv): {model.nv}")
# print(f"模型关节数(njnt): {model.njnt}")
# print(f"模型几何体数量(ngeom): {model.ngeom}")

# for i in range(model.njnt):
#     name = mujoco.mj_id2name(model, mujoco.mjtObj.mjOBJ_JOINT, i)
#     print(f"关节 {i}: {name}")

pause = False
def keycab(key):
    global pause
    if key == ord(' '):  # Space key
        pause = not pause
    print("暂停" if pause else "继续")

with mujoco.viewer.launch_passive(model, data, key_callback=keycab) as viewer:
    s = time.time()
    while viewer.is_running() and time.time() - s < 30:
        step_time = time.time()
        if not pause:
            mujoco.mj_step(model, data)
        with viewer.lock():
            viewer.opt.flags[mujoco.mjtVisFlag.mjVIS_CONTACTPOINT] = (int)(data.time % 2)
        viewer.sync()
        next_time = model.opt.timestep - (time.time() - step_time)
        if next_time > 0:
            time.sleep(next_time)
    print("simulation is done")
    while viewer.is_running():
        time.sleep(0.01)
    print("view is closed")