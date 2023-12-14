#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    struct dados_usuario
    {
        char nome[200], datanascimento[200], rg[200], cpf[200];
    };

    //
    struct dados_usuario usuario[5];

    int c;

    for (c = 0; c < 5; c++) {
        printf("\nSolicitando dados do usuário(a)...\n");
        printf("Informe o nome: ");
        gets(usuario[c].nome);
        printf("Informe a data de nascimento: ");
        gets(usuario[c].datanascimento);
        printf("Informe o RG: ");
        gets(usuario[c].rg);
        printf("Informe o CPF: ");
        gets(usuario[c].cpf);
      
    }

    system("cls || clear");

    printf("\nExibindo os dados dos usuários...\n");

    //
    for (c = 0; c < 5; c++) {
        printf("\nNome do usuário(a): %s \n", usuario[c].nome);
        printf("Data de nascimento do usuário(a): %s \n", usuario[c].datanascimento);
        printf("RG do usário(a): %s \n", usuario[c].rg);
        printf("CPF do usário(a): %s \n", usuario[c].cpf);
    }

    return 0;

}
