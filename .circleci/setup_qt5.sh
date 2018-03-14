#!/usr/bin/env bash

echo "Download Qt5"
wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run

echo "Install g++"
apt-get install build-essential

echo "Install generic font configuration library "
apt-get install -y libfontconfig1

echo "Install OpenGL"
apt-get install mesa-common-dev
apt-get install -y libglu1-mesa-dev

echo "Install Qt5"
chmod +x qt-opensource-linux-x64-5.7.0.run
./qt-opensource-linux-x64-5.7.0.run

