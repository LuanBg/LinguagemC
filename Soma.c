#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari�veis
    int i, numero, soma = 0;

    setlocale(LC_ALL, "portuguese");

    // Opera��o
    for (i = 1; i <= 5; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
        // ou
        // soma += numero;

    }

    // Exibi��o
    system("cls || clear");
    printf("Soma: %d", soma);

    return 0;
}