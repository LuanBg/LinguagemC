#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// VariÃ¡veis
int numeroum, numerodois, media, produto, soma, menornumero, maiornumero;

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroum);
    printf("Digite o segundo número: ");
    scanf("%d", &numerodois);
    system("cls || clear");

    media = (numeroum + numerodois) / 2;
    produto = (numeroum * numerodois);
    soma = (numeroum + numerodois);

    // Maior e o menor número
    if (numeroum > numerodois)
    {
        maiornumero = numeroum;
        menornumero = numerodois;
    }
    else
    {
        maiornumero = numerodois;
        menornumero = numeroum;  
    }

    // Resultado
    printf("Primeiro número: %.1d \n", numeroum);
    printf("Segundo número: %.1d \n", numerodois);
    printf("Menor número: %.1d \n", menornumero);
    printf("Maior número: %.1d \n", maiornumero);
    printf("Média: %.1d \n", media);
    printf("Soma: %.1d \n", soma);
    printf("Produto: %.1d \n", produto);
    return 0;
    
}