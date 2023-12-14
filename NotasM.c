#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    char alunos[2][200]; // Dois alunos
    float notas[2][3]; // Tres notas para cada um dos dois alunos
    int l, c;

    for (l = 0; l < 2; l++) {
        printf("Digite o nome do aluno: ");
        gets(alunos[l]);

        for (c = 0; c < 3; c++) {
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[l][c]);
        
        }

        fflush(stdin); // Para VS code e Dev C++ (Windows)
        //setbuf(stdin, 0); // Para OnlineGDB (Linux)

    }

    printf("\nExibindo os dados dos alunos...\n");

    for (l = 0; l < 2; l++) {
        printf("\nNome do aluno: %s \n", alunos[l]);

        for (c = 0; c < 3; c++) {
            printf("Nota: %.1f \n", notas[l][c]);
        }
        
    }
    
    return 0;

}