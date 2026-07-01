import mujoco
import mujoco.viewer
import time
from robot_descriptions import panda_mj_description
from robot_descriptions.loaders.mujoco import load_robot_description

model =mujoco.MjModel.from_xml_path(panda_mj_description.MJCF_PATH)
# model = load_robot_description("panda_mj_description")
# print(panda_mj_description.MJCF_PATH)
data = mujoco.MjData(model)
mujoco.mj_saveLastXML("mjmodel.xml", model)


mujoco.viewer.launch(model, data)
print("view is closed")
# ctrl=data.ctrl
# with mujoco.viewer.launch_passive(model, data) as viewer:
#     s=time.time()
#     while viewer.is_running() and time.time()-s<10:
#         step_time = time.time()
#         mujoco.mj_step(model, data)
#         with viewer.lock():
#             viewer.opt.flags[mujoco.mjtVisFlag.mjVIS_CONTACTPOINT] = (int)(data.time%2)
#         viewer.sync()
#         next_time = model.opt.timestep-(time.time()-step_time)
#         if next_time>0:
#             time.sleep(next_time)    