#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int tamanho = 3, numeros[tamanho], soma = 0, i;
    float media;

    //
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / i;

    printf("\nExibindo as notas digitadas... \n");

    for(i = 0; i < tamanho; i++) {
        printf("%d� nota: %d \n", i + 1, numeros[i]);
    }

    printf("M�dia do aluno: %.2f \n", media);
    
    return 0;

}