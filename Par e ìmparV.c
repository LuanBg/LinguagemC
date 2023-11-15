#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros[5], i, maior = 0, menor = 9999, par = 0, impar = 0;

    //
    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("\nExibindo os números digitados... \n");

    for(i = 0; i < 5; i++) {
        printf("Números digitados: %d \n", numeros[i]);
    }
    
        printf("\nQuantidade de número pares: %d \n", par);
        printf("Quantidade de número ìmpares: %d \n", impar);

    return 0;

}