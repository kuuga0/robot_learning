from setuptools import find_packages, setup

package_name = 'topic_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='wyp',
    maintainer_email='164617499+kuuga0@users.noreply.github.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'novel_publisher = topic_python.novel_pub_node:main',
            'novel_subscriber = topic_python.novel_sub_node:main',
        ],
    },
)
