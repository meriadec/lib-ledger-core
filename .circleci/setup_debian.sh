#!/usr/bin/env bash

echo "========> Install basic config"
apt-get update
apt-get install -y g++ make cmake wget curl yarn nodejs git build-essential libx11-xcb-dev qt5-default libqt5websockets5 libqt5websockets5-dev


echo "========> Install node"
curl -sL https://deb.nodesource.com/setup_9.x | -E bash -
apt-get install -y nodejs

echo "========> Install yarn"
curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | apt-key add -
echo "deb https://dl.yarnpkg.com/debian/ stable main" | tee /etc/apt/sources.list.d/yarn.list
apt-get update && apt-get install -y yarn
