#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Declarando variáveis.
    int idade;
    float peso;
    char sexo;
    char nome[300];

    // Solicitando dados para o usuário.
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    system("cls || clear");

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    system("cls || clear");

    fflush(stdin);

    printf("Informe seu sexo: ");
    scanf("%c", &sexo);

    system("cls || clear");

    fflush(stdin);

    printf("Informe seu nome: ");
    gets(nome);
    
    system("cls || clear"); 

    // Exibindo dados do usuário.
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.2f Kg. \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}