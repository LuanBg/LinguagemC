#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[5], i, maior = 0, menor = 9999;

    //
    for (i = 0; i < 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numeros[i]);

        maior = numeros[i] > maior ? numeros[i] : maior;

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nExibindo os n�meros digitados... \n");

    for(i = 0; i < 5; i++) {
        printf("N�meros digitados: %d \n", numeros[i]);
    }
    
        printf("\nO maior n�mero �: %d \n", maior);
        printf("O menor n�mero �: %d \n", menor);

    return 0;

}