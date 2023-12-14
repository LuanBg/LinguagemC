#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float coverteremcentimetro(float numero) {
    return numero * 100;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    float numero;
   
    printf("Digite a quantidade de metros: ");
    scanf("%f",&numero);

    printf("Em metros: %.2f m \nEm centímetro: %.2f cm \n", numero, coverteremcentimetro(numero));

    return 0;
}