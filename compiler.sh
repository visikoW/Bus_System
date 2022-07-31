#!/bin/bash

clang ./main.c ./Menu/Menu.c ./City/City.c ./Menu/Modulos.c ./Client/Name.c -o Sistema.out
./Sistema.out
rm -f Sistema.out
