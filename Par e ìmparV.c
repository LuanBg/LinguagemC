#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[5], i, maior = 0, menor = 9999, par = 0, impar = 0;

    //
    for (i = 0; i < 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("\nExibindo os n�meros digitados... \n");

    for(i = 0; i < 5; i++) {
        printf("N�meros digitados: %d \n", numeros[i]);
    }
    
        printf("\nQuantidade de n�mero pares: %d \n", par);
        printf("Quantidade de n�mero �mpares: %d \n", impar);

    return 0;

}