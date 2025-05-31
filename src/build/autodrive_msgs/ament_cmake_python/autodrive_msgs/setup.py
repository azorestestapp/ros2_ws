from setuptools import find_packages
from setuptools import setup

setup(
    name='autodrive_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('autodrive_msgs', 'autodrive_msgs.*')),
)
