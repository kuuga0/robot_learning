import gymnasium as gym

env = gym.make("CartPole-v1", render_mode="human")

obs,info = env.reset(seed=42)
print(obs, info)
print("env.observation_space: ", env.observation_space)
print("env.action_space: ", env.action_space)

for _ in range(1000):
    action = env.action_space.sample()  
    obs, reward, terminated, truncated, info = env.step(action)
    if terminated or truncated:
        obs, info = env.reset()

env.close()