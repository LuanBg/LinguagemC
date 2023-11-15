#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"portuguese");

    // Vari�veis
    float numeros [10], somapositivos = 0;
    int i, negativos = 0;

    // 
    for (i = 0; i < 10; i++) {
        printf("Informe um n�meros: ");
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        } else {
            somapositivos += numeros[i];
        }
    
    }

    printf("\nExibindo os os n�meros digitados... \n");

    for(i = 0; i < 10; i++) {
        printf("N�mero: %.1f \n", numeros[i]);
    }

    printf("\nQuantidade de n�meros negativos: %d \n", negativos);
    printf("Soma dos n�meros positivos: %.1f \n", somapositivos);

    return 0;
    
}