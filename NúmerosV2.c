#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[10], i;

    //
    for (i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nExibindo os n�meros digitados... \n");

    for(i = 0; i < 10; i++) {
        printf("%d� n�mero: %d \n", i + 1, numeros[i]);
    }
    
    return 0;

}