import mujoco
import mujoco.viewer
import time
import os
from robot_descriptions import panda_mj_description
from robot_descriptions.loaders.mujoco import load_robot_description

with open("mjmodel.xml", "r") as f:
    xml_string = f.read()

dirpath = os.path.dirname(panda_mj_description.MJCF_PATH)
assetpath = os.path.join(dirpath, "assets")
if os.path.exists(assetpath):
    xml_string = xml_string.replace('file="', f'file="{assetpath}/')
    with open("mjmodel_new.xml", "w") as f:
        f.write(xml_string)

    model =mujoco.MjModel.from_xml_path("mjmodel_new.xml")
    data = mujoco.MjData(model)


    mujoco.viewer.launch(model, data)
    print("view is closed")
else:
    print(f"assets path {assetpath} does not exist, please check the path.")
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