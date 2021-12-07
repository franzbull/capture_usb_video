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
sudo apt-get install libgtk2.0-dev pkg-config
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

# How to get camera jpg with opencv on tegra 

https://github.com/mdegans/nano_build_opencv

# How to get screens from youtube 

preconditions for ubuntu arm

# IMPORTANT youtube-dl default installation is not up-to-date, ==> use pip installer
```
pip3 install youtube-dl
youtube-dl "https://www.youtube.com/watch?v=1yRjurtAgVo"
```
