#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void parimpar(int numero) {
    if (numero % 2 == 0) {
        printf("Esse n�mero � par!");
    } else {
        printf("Esse n�mero � impar!");
    }
};

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int numero;

    //
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    parimpar(numero);
  
    return 0;

}