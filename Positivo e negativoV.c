#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"portuguese");

    // Variáveis
    float numeros [10], somapositivos = 0;
    int i, negativos = 0;

    // 
    for (i = 0; i < 10; i++) {
        printf("Informe um números: ");
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        } else {
            somapositivos += numeros[i];
        }
    
    }

    printf("\nExibindo os os números digitados... \n");

    for(i = 0; i < 10; i++) {
        printf("Número: %.1f \n", numeros[i]);
    }

    printf("\nQuantidade de números negativos: %d \n", negativos);
    printf("Soma dos números positivos: %.1f \n", somapositivos);

    return 0;
    
}