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
    printf("\nQuantidade de n�meros pares: %d \n", pares);
    printf("Quantidade de n�meros �mpares: %d", impares);
};

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int numero[6], i;

    //
    for (i = 0; i < 6; i++) {
    printf("Digite um n�mero: ");
    scanf("%d", &numero[i]);
    }

    parimpar(numero);
  
    return 0;

}