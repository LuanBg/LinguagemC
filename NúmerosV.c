#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[5];

    //
    printf("Digite o 1� n�mero: ");
    scanf("%d", &numeros[0]);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numeros[1]);

    printf("Digite o 3� n�mero: ");
    scanf("%d", &numeros[2]);

    printf("Digite o 4� n�mero: ");
    scanf("%d", &numeros[3]);

    printf("Digite o 5� n�mero: ");
    scanf("%d", &numeros[4]);

    printf("\nExibindo os n�meros digitados... \n");

    printf("1� n�meros: %d \n", numeros[0]);
    printf("2� n�meros: %d \n", numeros[1]);
    printf("3� n�meros: %d \n", numeros[2]);
    printf("4� n�meros: %d \n", numeros[3]);
    printf("5� n�meros: %d \n", numeros[4]);

    return 0;

}