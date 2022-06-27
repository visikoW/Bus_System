#!/bin/bash

clang ./main.c ./Menu/Menu.c ./City/City.c ./Menu/Modulos.c -o Sistema.out
./Sistema.out
rm -f Sistema.out
