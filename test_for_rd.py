import mujoco
import mujoco.viewer
import time
# from robot_descriptions import panda_mj_description
# from robot_descriptions.loaders.mujoco import load_robot_description

model =mujoco.MjModel.from_xml_path("simple.xml")
# model = load_robot_description("panda_mj_description")
data = mujoco.MjData(model)

# mujoco.viewer.launch(model, data)
# print("view is closed")
try:
    with mujoco.viewer.launch_passive(model, data) as viewer:
        s=time.time()
        while viewer.is_running() and time.time()-s<30:
            step_time = time.time()
            mujoco.mj_step(model, data)
            now=time.time()
            print(f"time: {now-s:.2f}    height: {data.qpos[2]:.4f}")
            with viewer.lock():
                viewer.opt.flags[mujoco.mjtVisFlag.mjVIS_CONTACTPOINT] = (int)(data.time%2)
            viewer.sync()
            next_time = model.opt.timestep-(time.time()-step_time)
            if next_time>0:
                time.sleep(next_time)  
        print("simulation is done")  
        while viewer.is_running():
            time.sleep(0.01)
except Exception as e:
    print(f"Error occurred: {e}")