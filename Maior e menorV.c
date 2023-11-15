#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros[5], i, maior = 0, menor = 9999;

    //
    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        maior = numeros[i] > maior ? numeros[i] : maior;

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nExibindo os números digitados... \n");

    for(i = 0; i < 5; i++) {
        printf("Números digitados: %d \n", numeros[i]);
    }
    
        printf("\nO maior número é: %d \n", maior);
        printf("O menor número é: %d \n", menor);

    return 0;

}