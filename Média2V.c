#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int tamanho = 4, numeros[tamanho], soma = 0, i;
    float media;

    //
    for (i = 0; i < tamanho; i++) {
        printf("Digite a %d� nota: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / i;

    printf("\nExibindo as notas digitadas... \n");

    for(i = 0; i < tamanho; i++) {
        printf("%d� nota: %d \n", i + 1, numeros[i]);
    }

    if (media >= 7) {
        printf("\nM�dia do aluno: %.2f \n", media);
        printf("Aprovado!");
    } else if (media >= 5) {
        printf("\nM�dia do aluno: %.2f \n", media);
        printf("Recupera��o!");
    } else {
        printf("\nM�dia do aluno: %.2f \n", media);
        printf("Reprovado!");
    }
    
    return 0;

}