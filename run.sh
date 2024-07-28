#! /bin/sh

clang++ --std=c++17 -o temp "$@"
./temp
rm ./temp
