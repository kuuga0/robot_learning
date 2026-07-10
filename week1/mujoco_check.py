import mujoco
import os

pkg_dir = os.path.dirname(mujoco.__file__)   # .../site-packages/mujoco
models_dir = os.path.join(pkg_dir, "models")
print(models_dir)