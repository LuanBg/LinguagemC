#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    struct dados_pessoa {
        char nome[200];
        int idade;
        float peso, altura;
    };

    //
    struct dados_pessoa pessoa;

    printf("\nSolicitando dados do usuário...\n");
    printf("Digite o nome: ");
    gets(pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o peso: ");
    scanf("%f", &pessoa.peso);
    printf("Digite a altura: ");
    scanf("%f", &pessoa.altura);

    fflush(stdin);
   
    printf("\nExibindo dados do usuário...\n");
    printf("Nome: %s \n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Peso: %.2f kg\n", pessoa.peso);
    printf("Altura: %.2f \n", pessoa.altura);
   
    return 0;

}