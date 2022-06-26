#include <stdio.h>

int get_menu(char nome[100]) {
    int choosed;

    printf("\n********** Menu do usuário: %s **********\n", nome);

    printf("Selecione um dos módulo: \n");
    printf("1 - lista de cidades\n");
    printf("2 - passagens restantes\n");
    printf("3 - assentos restantes\n");

    printf("Select > ");
    scanf("%i", &choosed);

    switch (choosed)
    {
    case 1:
        get_cidades();
        break;
    case 2:
        get_passagens();
        break;
    case 3:
        get_assentos();
        break;
    default:
        break;
    }
}
