#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int i, numero, soma = 0;

    setlocale(LC_ALL, "portuguese");

    // Operação
    for (i = 1; i <= 5; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
        // ou
        // soma += numero;

    }

    // Exibição
    system("cls || clear");
    printf("Soma: %d", soma);

    return 0;
}