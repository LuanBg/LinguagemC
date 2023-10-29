#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    char loginsalvo [200] = "Luan";
    char senhasalva [200] = "senai12345";
    char login [200];
    char senha [200];

    while (1) {
        // Solicitando dados para o usuário
        printf("Digite o seu login: ");
        gets(login);
        printf("Digite sua senha: ");
        gets(senha);
        printf("\n");

        // Comparação
        if(strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
          printf("Bem-vindo!\n");
          break;
        } else {
        printf("Acesso negado!\n");
        }

    }

    return 0;

}