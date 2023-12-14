#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct dados_aluno {
    char nome[200];
    float notas[3];
    float media;
};

float calcularMedia(struct dados_aluno aluno) {
    int i;
    float somaNotas = 0;
   
    for (i = 0; i < TAM; i++) {
        somaNotas += aluno.notas[i];
    }

    return somaNotas / i;
}

int main() {
    setlocale(LC_ALL, "");
   
    struct dados_aluno aluno;
    int i;
   
    // Solicitando dados do usuário.
    printf("Digite o nome: ");
    gets(aluno.nome);
   
    for (i = 0; i < TAM; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f",&aluno.notas[i]);    
    }
   
    // Calculando a média.
    aluno.media = calcularMedia(aluno);
   
    // Exibindo os resultados.
    printf("\nMédia: %.2f \n", aluno.media);
   
    return 0;
}