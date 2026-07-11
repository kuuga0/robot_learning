import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wyp/test/robot_learning/week2/topic_ws/install/topic_python'
