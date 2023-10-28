#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int primeironumero, segundonumero, terceironumero, maior, menor;

    setlocale(LC_ALL, "portuguese");

    // Informações
    printf("Digite o primeiro número: ");
    scanf("%d", &primeironumero);
    printf("Digite o segundo número: ");
    scanf("%d", &segundonumero);
    printf("Digite o terceiro número: ");
    scanf("%d", &terceironumero);
    system("cls || clear");

    // Operação
    maior = primeironumero > segundonumero ? primeironumero : segundonumero;
    maior = maior > terceironumero ? maior : terceironumero;

    menor = primeironumero < segundonumero ? primeironumero : segundonumero;
    menor = menor < terceironumero ? menor : terceironumero;

    // Resultado
    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);

    return 0;
}