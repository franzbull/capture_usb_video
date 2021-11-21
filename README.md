# How to get usb camery running

preconditions for ubuntu on arm:

get driver packages:  
```
# https://github.com/limhyon/guvcview
sudo apt-get install guvcview
# https://github.com/fsphil/fswebcam
sudo apt-get install fswebcam

# test capture picture
fswebcam -r 2048x1538 test.jpg

# TODO guvcview atm must be executed with sudo rights
sudo guvcview
```
