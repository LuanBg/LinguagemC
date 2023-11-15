#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros[5];

    //
    printf("Digite o 1° número: ");
    scanf("%d", &numeros[0]);

    printf("Digite o 2° número: ");
    scanf("%d", &numeros[1]);

    printf("Digite o 3° número: ");
    scanf("%d", &numeros[2]);

    printf("Digite o 4° número: ");
    scanf("%d", &numeros[3]);

    printf("Digite o 5° número: ");
    scanf("%d", &numeros[4]);

    printf("\nExibindo os números digitados... \n");

    printf("1° números: %d \n", numeros[0]);
    printf("2° números: %d \n", numeros[1]);
    printf("3° números: %d \n", numeros[2]);
    printf("4° números: %d \n", numeros[3]);
    printf("5° números: %d \n", numeros[4]);

    return 0;

}