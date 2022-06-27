#include <stdio.h>

void get_menu(char nome[100]) {
    int choosed;

    printf("\n********** Menu do usuário: %s **********\n", nome);

    printf("Selecione um dos módulo: \n");
    get_modulos();

    printf("Select > ");
    scanf("%i", &choosed);
    while (choosed != 0) {
        switch (choosed) {
            case 1:
                get_cidades();
                break;
            case 2:
                // get_passagens();
                break;
            case 3:
                // get_assentos();
                break;
            default:
                printf("\nSelecione um dos módulo: \n");
                get_modulos();
                break;
        }
        printf("Select > ");
        scanf("%i", &choosed);
    }
}
