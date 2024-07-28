#! /bin/sh

clang++ --std=c++20 -o temp "$@"
./temp
rm ./temp
