#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    //
    struct dados_aluno
    {
        char nome[200];
        int idade;
    };
    struct dados_professor
    {
        char nome[200];
        int matricula;
    };

    //
    struct dados_aluno aluno;
    struct dados_professor professor;

    printf("\nSolicitando dados do aluno...\n");
    printf("Digite o nome do aluno: ");
    gets(aluno.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    fflush(stdin);

    printf("\nSolicitando dados do professor...\n");
    printf("Digite o nome do professor: ");
    gets(professor.nome);
    printf("Digite a matricula do professor: ");
    scanf("%d", &professor.matricula);

    printf("\nExibindo dados do aluno...");
    printf("\nNome do aluno: %s \n", aluno.nome);
    printf("Idade do aluno: %d anos \n", aluno.idade);

    printf("\nExibindo dados do professor...");
    printf("\nNome do professor: %s \n", professor.nome);
    printf("Matricula do professor: %d \n", professor.matricula);

    return 0;
    
}