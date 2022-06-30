#include <stdio.h>
#include <string.h>

char get_nome(void){
    char nome[] = "";
    printf("\nPor favor, digite seu nome: ");
    scanf("%s", &nome);

    printf("%s\n", nome);

    return &nome;
}

int main (void) {
    printf("%s\n", get_nome());
}
