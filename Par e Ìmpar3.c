#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int i, numero, numeropar = 0, numeroimpar = 0;

    setlocale(LC_ALL, "portuguese");

    // Informando dados
    for (i = 1; i <= 5; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &numero);

        // Operação
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

    // Exibição
    printf("\nNúmeros ìmpares: %d \n", numeroimpar);
    printf("Números pares: %d", numeropar);

    return 0;
}