#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL,"portuguese");

    // Variáveis
    char nomes [2] [200];
    int idades [2], i;

    // 
    for (i = 0; i < 2; i++) {
        printf("Informe seu o nome: ");
        gets(nomes[i]);
        printf("Informe sua idade: ");
        scanf("%d", &idades[i]);
        fflush(stdin);
    }

    printf("\nExibindo os dados digitados... \n");

    for(i = 0; i < 2; i++) {
        printf("\nNome: %s \n", nomes[i]);
        printf("Idade: %d anos\n", idades[i]);
    }

    return 0;
}