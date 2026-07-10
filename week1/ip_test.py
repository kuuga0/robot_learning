import mujoco
import numpy as np

model = mujoco.MjModel.from_xml_path("ip.xml")
data = mujoco.MjData(model)

data.ctrl[0] = 1.0  # Set the control input for the first actuator

print("Step\tAngle(deg)\tAngularVel")

for i in range(300):
    mujoco.mj_step(model, data)
    ang = np.degrees(data.qpos[0])
    ang_vel = data.qvel[0]
    if i %30 == 0:
        print(f"{i}\t{ang:.2f}\t\t{ang_vel:.4f}")