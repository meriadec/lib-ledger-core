#!/usr/bin/env bash

#echo "Download Qt5"
#wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run
#
#echo "Install g++"
#apt-get install build-essential
#
#echo "Install Qt5 dependencies"
#apt-get install -y libfontconfig1 libdbus-1-dev mesa-common-dev libglu1-mesa-dev
#
#echo "Install Qt5"
#chmod +x qt-opensource-linux-x64-5.7.0.run
#./qt-opensource-linux-x64-5.7.0.run

echo "Install Qt5 dependencies"
apt-get install -y libxcb*
apt-get install -y libx11-xcb-dev

echo "Clone Qt5 repository"
git clone git://code.qt.io/qt/qt5.git qt5

echo "Init Qt5 repository"
cd qt5
./init-repository

echo "Add Qt5 au Path"
export PATH=$PWD/qtbase/bin:$PATH

echo "Configurate Qt5"
./configure -nomake examples -nomake demos -nomake tests -no-gtkstyle

echo "Build Qt5"
make -j3

cd ..



