#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void parimpar(int numero) {
    if (numero % 2 == 0) {
        printf("Esse número é par!");
    } else {
        printf("Esse número é impar!");
    }
};

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int numero;

    //
    printf("Digite um número: ");
    scanf("%d", &numero);

    parimpar(numero);
  
    return 0;

}