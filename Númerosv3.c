#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int tamanho = 100, numeros[tamanho], i;

    //
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nExibindo os n�meros digitados... \n");

    for(i = 0; i < tamanho; i++) {
        printf("%d� n�mero: %d \n", i + 1, numeros[i]);
    }
    
    return 0;

}