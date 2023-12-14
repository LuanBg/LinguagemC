#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

float medias(float notas[]) {
    int i;
    float somanotas = 0, media;
    for (i = 0; i < TAM; i++) {
        somanotas += notas[i];
    }

    media = somanotas / i;
    return media;

}

int main () {

    setlocale(LC_ALL, "portuguese");

    //
    float notas[TAM], media;
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite a %d nota: ", 1 + i);
        scanf("%f", &notas[i]);
    }

    media = medias(notas);

    printf("Média: %.1f", media);

    return 0;

}