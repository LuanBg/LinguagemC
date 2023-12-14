#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrartabuada(int n1) {
    int i;
    for (i = 0; i <= 10; i++) 
    printf("%d X %d = %d \n", n1, i, n1 * i);
};

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int numero;

    //
    printf("Digite um número de 1 à 10: ");
    scanf("%d", &numero);
    printf("\n");

    mostrartabuada(numero);
  
    return 0;

}