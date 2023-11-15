#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros [6], i;

    //
    printf("Informe 6 n�meros inteiros pares!\n");
    printf("\n");

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o %d� n�mero: ", i + 1);
            scanf("%d", &numeros[i]);

            if (numeros[i] % 2 != 0) {
                printf("N�mero inv�lido.\n");
                printf("Informe um n�mero par!\n");
            }
        } while (numeros[i] % 2 != 0);
    }

    printf("\nExibindo os valores de forma inversa...\n");

    for (i = 5; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;

}