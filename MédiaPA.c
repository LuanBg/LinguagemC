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
    printf("Digite o primeiro número: ");
    scanf("%f", &primeironumero);
    printf("Digite o segundo número: ");
    scanf("%f", &segundonumero);

    media = medianumeros(primeironumero, segundonumero);

    //
    printf("\nPrimeiro número: %.1f \n", primeironumero);
    printf("Segundo número: %.1f \n", segundonumero);
    printf("Média: %.1f", media);
  
    return 0;

}