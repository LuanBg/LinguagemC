#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho() {
    printf("\n=======================\n");
    printf("\tSENAI");
    printf("\n=======================\n");

}

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    char nome [200];
    int idade;

    //
    cabecalho();

    printf("Digite um nome: ");
    gets(nome);
    printf("Digite uma idade: ");
    scanf("%d", &idade);

    cabecalho();

    //
    printf("Nome: %s \n", nome);
    printf("Idade: %d anos", idade);

    return 0;

}