#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis
    char loginsalvo [200] = "Luan";
    char senhasalva [200] = "senai12345";
    char login [200];
    char senha [200];

    // Solicitando dados para o usu�rio
    printf("Digite o seu login: ");
    gets(login);
    printf("Digite sua senha: ");
    gets(senha);
    system("cls || clear");

    // Compara��o
    if(strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
        printf("Bem-vindo!");
    } else {
        printf("Acesso negado!");
    }
 return 0;
}