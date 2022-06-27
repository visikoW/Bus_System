#include <stdio.h>

int main (){
    char nome[256];

    printf("\n********************************\n");
    printf("Seja muito bem-vindo ao sistema de Ônibus de Serra Talhada!");
    printf("\n********************************\n");

    printf("\nPor favor, digite seu nome: ");
    scanf("%s", &nome);

    get_menu(&nome);
}
