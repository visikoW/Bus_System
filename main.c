#include <stdio.h>

int main (){
    printf("\n********************************\n");
    printf("Seja muito bem-vindo ao sistema de Ônibus de Serra Talhada!");
    printf("\n********************************\n");

    char nome[256] = get_nome();

    get_menu(&nome);
}
