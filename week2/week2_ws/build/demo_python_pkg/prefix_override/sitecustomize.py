import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wyp/test/robot_learning/week2/week2_ws/install/demo_python_pkg'
