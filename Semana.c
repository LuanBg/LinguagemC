#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Declarando variÃ¡veis
    int dia;

    setlocale(LC_ALL, "portuguese");

    // InformaÃ§Ã£o
    printf("Digite um número para um dia da semana: ");
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
            printf("Dia útil");
            break;
        case 3 :
            printf("Terça \n");
            printf("Dia útil");
            break;
        case 4 :
            printf("Quarta \n");
            printf("Dia útil");
            break;
        case 5 :
            printf("Quinta \n");
            printf("Dia útil");
            break;
        case 6 :
            printf("Sexta \n");
            printf("Dia útil");
            break;
        case 7 :
            printf("Sábado \n");
            printf("Fim de semana");
            break;
        default :
            printf("Inválido!");
    }

    return 0;
}