#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari�veis
    int primeironumero, segundonumero, terceironumero, maior, menor;

    setlocale(LC_ALL, "portuguese");

    // Informa��es
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &primeironumero);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &segundonumero);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &terceironumero);
    system("cls || clear");

    // Opera��o
    maior = primeironumero > segundonumero ? primeironumero : segundonumero;
    maior = maior > terceironumero ? maior : terceironumero;

    menor = primeironumero < segundonumero ? primeironumero : segundonumero;
    menor = menor < terceironumero ? menor : terceironumero;

    // Resultado
    printf("Maior n�mero: %d \n", maior);
    printf("Menor n�mero: %d \n", menor);

    return 0;
}