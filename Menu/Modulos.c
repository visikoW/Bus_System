#include <stdio.h>
#include <string.h>

void get_modulos(void){
    int lenght = 0;
    char modulos [][100] = {"0 - cancelar", "1 - lista de cidades", "2 - passagens restantes", "3 - assentos restantes"};
    for(int i = 0; i < sizeof(modulos) / sizeof(modulos[0]); i++) {
        printf("%s\n", modulos[i]);
    }
    printf("\n");
}
