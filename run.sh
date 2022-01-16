#!/bin/zsh

rm -rf ./build
mkdir ./build
cd ./build

cmake ..

cmake --build .

./cmake-sdl2