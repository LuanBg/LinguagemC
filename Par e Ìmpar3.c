#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari�veis
    int i, numero, numeropar = 0, numeroimpar = 0;

    setlocale(LC_ALL, "portuguese");

    // Informando dados
    for (i = 1; i <= 5; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numero);

        // Opera��o
        if (numero % 2 == 0) {
        // numeropar = numeropar + 1;
        numeropar++;
        } else {
        // numeroimpar = numeroimpar + 1;
        numeroimpar++;
        }
    }

    // ou
    //  numero % 2 == 0 ? numeropar++ : numeroimpar++;

    // Exibi��o
    printf("\nN�meros �mpares: %d \n", numeroimpar);
    printf("N�meros pares: %d", numeropar);

    return 0;
}