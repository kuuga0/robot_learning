import torch
import torch.nn as nn
import numpy as np
import mujoco

class RandomAgent(nn.Module):
    """一个随机策略网络，接收 MuJoCo 观测，输出动作"""
    def __init__(self, obs_dim, act_dim):
        super().__init__()
        self.net = nn.Sequential(
            nn.Linear(obs_dim, 64),
            nn.ReLU(),
            nn.Linear(64, act_dim),
            nn.Tanh()
        )
    
    def forward(self, obs):
        return self.net(obs)

def get_obs(data, model):
    """从 MuJoCo data 中提取观测：摆角、角速度"""
    # 对于 hinge 关节，qpos[0] 是角度，qvel[0] 是角速度
    return np.array([data.qpos[0], data.qvel[0]], dtype=np.float32)

def main():
    # 1. 加载 MuJoCo 模型
    model = mujoco.MjModel.from_xml_path("ip.xml")
    data = mujoco.MjData(model)
    
    # 2. 创建随机策略网络
    agent = RandomAgent(obs_dim=2, act_dim=1)
    
    # 3. 仿真 1000 步
    for step in range(1000):
        obs = get_obs(data, model)
        obs_tensor = torch.from_numpy(obs).unsqueeze(0)
        action = agent(obs_tensor).item()
        
        # 缩放动作到执行器范围 [-10, 10]
        data.ctrl[0] = action * 10.0
        
        mujoco.mj_step(model, data)
        
        if step % 100 == 0:
            print(f"Step {step}: obs={obs}, action={action:.3f}")
    
    print("Simulation completed successfully.")

if __name__ == "__main__":
    main()