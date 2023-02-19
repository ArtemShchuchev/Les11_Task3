#!/bin/bash
cmake -S . -B build
cd build
cmake --build . --config debug
./MyProgramm
exec $SHELL
