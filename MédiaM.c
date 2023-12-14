#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    char alunos[3][200]; 
    float notas[3][3], media [3], somanotas = 0;
    int l, c; 

    for (l = 0; l < 3; l++) {
        printf("\nDigite o nome do aluno: ");
        gets(alunos[l]);

        for (c = 0; c < 3; c++) {
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[l][c]);

            somanotas += notas[l][c];
        }

        media[l] = somanotas / c;
        somanotas = 0;

        fflush(stdin); // Para VS code e Dev C++ (Windows)
        //setbuf(stdin, 0); // Para OnlineGDB (Linux)
    }

    printf("\nExibindo os dados dos alunos...\n");

    for (l = 0; l < 3; l++) {
        printf("\nNome do aluno: %s \n", alunos[l]);

        for (c = 0; c < 3; c++) {
            printf("Nota: %.1f \n", notas[l][c]);
        }

        printf("Média do aluno: %.1f \n", media[l]);
        
    }
    
    return 0;

}