#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void parimpar(int numero[]) {
    int i, pares = 0, impares = 0;
    for (i = 0; i < 6; i++) {
        if (numero[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("\nQuantidade de números pares: %d \n", pares);
    printf("Quantidade de números ìmpares: %d", impares);
};

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int numero[6], i;

    //
    for (i = 0; i < 6; i++) {
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
    }

    parimpar(numero);
  
    return 0;

}