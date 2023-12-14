#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho() {
    printf("\n=======================\n");
    printf("\tSENAI");
    printf("\n=======================\n");
}
void limpatela() {
    fflush(stdin);
    system("cls || clear");
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

    limpatela();

    //
    cabecalho();
    printf("Nome: %s \n", nome);
    printf("Idade: %d", idade);

    return 0;

}