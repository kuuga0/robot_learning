from setuptools import find_packages, setup
from glob import glob

package_name = 'py_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name+'/resource', ['resource/default.png', 'resource/test1.png', 
                                               'resource/test2.png', 'resource/test3.png']),
        ('share/' + package_name+'/launch', glob('launch/*.launch.py')),
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
            'learn_to_detect = py_service.learn_to_detect:main',
            'face_detect = py_service.face_detect:main',
            'detect_client = py_service.detect_client:main',
        ],
    },
)
