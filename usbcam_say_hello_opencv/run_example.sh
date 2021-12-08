#!/bin/bash

set -evx

# run build and application from top folder
cmake .
make

./VideoCapture test.jpg