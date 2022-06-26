#include <stdio.h>
#include <string.h>

void main() {
    int lenght = 0;
    char cidades[][256] = {"Recife", "Triunfo", "Salgueiro", "Mirandiba", "Bom nome", "Belmonte", "Itacaratu"};
    for(int i = 0; i < sizeof(cidades) / sizeof(cidades[0]); i++) {
        printf("%d ", cidades[i]);
    }
}
