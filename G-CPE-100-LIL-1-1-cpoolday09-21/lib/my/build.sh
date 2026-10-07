#!/usr/bin/env bash

clang -c *.c -I../../include/
ar rc libmy.a *.o
rm -f *.o
