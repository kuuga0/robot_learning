import mujoco
import mujoco.viewer
import time
import sys
import argparse

def parse_args():
    parser = argparse.ArgumentParser(description="Mujoco Simulation Viewer")
    parser.add_argument("xml", type=str, 
                        nargs='?', default="simple.xml", help="Path to the Mujoco XML model file")
    parser.add_argument("-d", "--duration", type=float, default=20.0, 
                        help="Duration of the simulation in seconds")
    parser.add_argument("-t", "--timestep", type=float, default=None, 
                        help="Timestep for the simulation")
    parser.add_argument("-nc", "--no-contact", action="store_true", 
                        help="Disable contact visualization")
    return parser.parse_args()

args = parse_args()
try:
    model = mujoco.MjModel.from_xml_path(args.xml)
except Exception as e:
    print(f"Error loading model from {args.xml}: {e}")
    sys.exit(1)
# mujoco.viewer.launch(model, data)
# print("view is closed")
data = mujoco.MjData(model)

try:
    with mujoco.viewer.launch_passive(model, data) as viewer:
        s=time.time()
        if args.timestep is not None:
            model.opt.timestep = args.timestep
        while viewer.is_running() and time.time()-s < args.duration:
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