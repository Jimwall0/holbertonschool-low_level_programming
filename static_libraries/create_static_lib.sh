#!/bin/bash
gcc -c *.c
ar crv libmy.a *.o
rm *.o
nm libmy.a
