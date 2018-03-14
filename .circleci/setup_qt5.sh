#!/usr/bin/env bash

echo "Download Qt5"
wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run

echo "Install g++"
sudo apt-get install build-essential

echo "Install generic font configuration library "
sudo apt-get install libfontconfig1

echo "Install OpenGL"
sudo apt-get install mesa-common-dev
sudo apt-get install libglu1-mesa-dev -y

echo "Install Qt5"
chmod +x qt-opensource-linux-x64-5.7.0.run
./qt-opensource-linux-x64-5.7.0.run
