#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variáveis
int numeroum, numerodois, media, produto, soma, menornumero, maiornumero;

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numeroum);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numerodois);
    system("cls || clear");

    media = (numeroum + numerodois) / 2;
    produto = (numeroum * numerodois);
    soma = (numeroum + numerodois);

    // Maior e o menor n�mero
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
    printf("Primeiro n�mero: %.1d \n", numeroum);
    printf("Segundo n�mero: %.1d \n", numerodois);
    printf("Menor n�mero: %.1d \n", menornumero);
    printf("Maior n�mero: %.1d \n", maiornumero);
    printf("M�dia: %.1d \n", media);
    printf("Soma: %.1d \n", soma);
    printf("Produto: %.1d \n", produto);
    return 0;
    
}