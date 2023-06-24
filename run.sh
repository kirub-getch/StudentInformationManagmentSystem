#!/bin/bash

g++ -c *.cpp
mv *.o object/
g++ object/*.o -o home
./home 