#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Declarando variáveis
    int dia;

    setlocale(LC_ALL, "portuguese");

    // Informação
    printf("Digite um n�mero para um dia da semana: ");
    scanf("%d", &dia);
    system("cls || clear");

    // Resultado
    switch(dia) {
        case 1 :
            printf("Domingo \n");
            printf("Fim de semana");
            break;
        case 2 :
            printf("Segunda \n");
            printf("Dia �til");
            break;
        case 3 :
            printf("Ter�a \n");
            printf("Dia �til");
            break;
        case 4 :
            printf("Quarta \n");
            printf("Dia �til");
            break;
        case 5 :
            printf("Quinta \n");
            printf("Dia �til");
            break;
        case 6 :
            printf("Sexta \n");
            printf("Dia �til");
            break;
        case 7 :
            printf("S�bado \n");
            printf("Fim de semana");
            break;
        default :
            printf("Inv�lido!");
    }

    return 0;
}