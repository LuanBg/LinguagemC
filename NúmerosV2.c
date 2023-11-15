#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int numeros[10], i;

    //
    for (i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nExibindo os números digitados... \n");

    for(i = 0; i < 10; i++) {
        printf("%d° número: %d \n", i + 1, numeros[i]);
    }
    
    return 0;

}