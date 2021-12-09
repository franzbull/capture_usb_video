# How to get usb camery running

preconditions for ubuntu on arm:

get driver packages und run screen capture (picture/video):  
```
# https://github.com/limhyon/guvcview
sudo apt-get install guvcview
# https://github.com/fsphil/fswebcam
sudo apt-get install fswebcam

# test capture picture
fswebcam -r 2048x1538 test.jpg

# TODO guvcview atm must be executed with sudo rights (GUI for video capture)
sudo guvcview

# usage of FFMPEG for screen capture
ffmpeg -f v4l2 -framerate 25 -video_size 640x480 -i /dev/video0 test.mpeg
```

# How to get camera jpg with opencv

prerequisites
```
# Install minimal prerequisites (Ubuntu 18.04 as reference)
sudo apt update && sudo apt install -y cmake g++ wget unzip
# Install additional optional dependencies
sudo apt-get install libgtk2.0-dev pkg-config libcanberra-gtk-module libcanberra-gtk3-module
# Download and unpack sources
wget -O opencv.zip https://github.com/opencv/opencv/archive/master.zip
unzip opencv.zip
# Create build directory
mkdir -p build && cd build
# Configure
cmake  ../opencv-master
# Build
cmake --build .
```
make opencv systemwide available
```
sudo make install
```
configuration for VisualStudioCode IntelliSense Auto Completion for opencv 
file: c_cpp_properties.json (public hpp files for visual studio code by adding "/usr/local/include/**" to "includePath"
```
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/usr/local/include/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/clang",
            "cStandard": "c11",
            "cppStandard": "c++14",
            "intelliSenseMode": "linux-clang-arm64"
        }
    ],
    "version": 4
}
```

# How to get camera with opencv on tegra 

https://github.com/mdegans/nano_build_opencv

# How to get screens from youtube 

IMPORTANT youtube-dl default installation is not up-to-date, ==> use pip installer
```
sudo apt-get -y install python3-pip
pip3 install youtube-dl
youtube-dl "https://www.youtube.com/watch?v=1yRjurtAgVo"
```
