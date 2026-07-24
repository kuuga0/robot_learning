import sys
if sys.prefix == '/home/wyp/miniconda3/envs/robopy':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wyp/test/robot_learning/week2/test_week2_ws/install/mj_sim'
