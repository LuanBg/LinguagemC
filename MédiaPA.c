#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float medianumeros(float n1, float n2) {
    float resultado;
    resultado = (n1 + n2) / 2;

    return resultado;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    float primeironumero, segundonumero, media;

    //
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &primeironumero);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &segundonumero);

    media = medianumeros(primeironumero, segundonumero);

    //
    printf("\nPrimeiro n�mero: %.1f \n", primeironumero);
    printf("Segundo n�mero: %.1f \n", segundonumero);
    printf("M�dia: %.1f", media);
  
    return 0;

}