#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o libll.so
