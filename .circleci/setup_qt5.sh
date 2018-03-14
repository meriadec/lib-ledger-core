#!/usr/bin/env bash

echo "Download Qt5"
wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run

echo "Install g++"
apt-get install build-essential

echo "Install Qt5 dependencies"
apt-get install -y libfontconfig1 libdbus-1-dev mesa-common-dev libglu1-mesa-dev

echo "Install Qt5"
chmod +x qt-opensource-linux-x64-5.7.0.run
./qt-opensource-linux-x64-5.7.0.run

