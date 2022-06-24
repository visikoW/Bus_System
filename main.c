#include <stdio.h>

int get_length(char s[256]){
    int length = 0;
    for (int i = 0; s[length] != '\0'; i++){
        length += i;
    }
    return length;
}

int main (void){
    char salgueiro[9] = "Salgueiro";
    char recife[6] = "Recife";
    char mirandiba[9] = "Mirandiba";
    char destinos_fixos[3] = {salgueiro, recife, mirandiba};

    char nome[256];
    char localizacao[256];
    char destino[256];
    int passagens;
    
    printf("Bem vindo ao sistema de ônibos de Serra Talhada\n");
    printf("--------------------------------\n");

    printf("\nPor favor digite o teu nome: ");
    scanf("%s", &nome);

    printf("Por favor digite o seu destino: ");
    scanf("%s", &destino);

    printf("Quantas pasasgens serão compradas? ");
    scanf("%d", &passagens);
    
    for (int i = 0; get_length(destinos_fixos) ; i++){
        if (destinos_fixos[i] == &destino){
            printf("--------------------------------\n");
            printf("Qual será o tipo de passagem? (1 - ida, 2- volta, 3 - ida e volta)");
        }
    }
}