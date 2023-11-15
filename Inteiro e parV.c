#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros [6], i;

    //
    printf("Informe 6 números inteiros pares!\n");
    printf("\n");

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o %d° número: ", i + 1);
            scanf("%d", &numeros[i]);

            if (numeros[i] % 2 != 0) {
                printf("Número inválido.\n");
                printf("Informe um número par!\n");
            }
        } while (numeros[i] % 2 != 0);
    }

    printf("\nExibindo os valores de forma inversa...\n");

    for (i = 5; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;

}