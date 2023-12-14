#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari√°veis
    char banda [3][200], integrantes [3][5][200];
    int l, c;

    // 
    for (l = 0; l < 3; l++) {
        printf("\nInforme o nome da %d∞ banda: ", l + 1);
        gets(banda[l]);

        for (c= 0; c < 5; c++) {
            printf("Informe o %d∞ integrante da banda: ", c + 1);
            gets(integrantes[l][c]);
        }
    }

    system("cls || clear");

    printf("\nExibindo dados informados...\n");

    for (l = 0; l < 3; l++) {
        printf("\nNome da banda: %s \n", banda[l]);

        for (c = 0; c < 5; c++) {
            printf("Integrante da banda: %s \n", integrantes[l][c]);
        }
    }

    return 0;

}