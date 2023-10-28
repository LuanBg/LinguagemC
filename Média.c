#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    //Variáveis
    float media, primeiranota, segundanota;

    //
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &primeiranota);
    } while (primeiranota < 0 || primeiranota > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", &segundanota);
    } while (segundanota < 0 || segundanota > 10);

    media = (primeiranota + segundanota) / 2;

    //
    printf("\nPrimeira nota: %.1f \n", primeiranota);
    printf("Segunda nota: %.1f \n", segundanota);
    printf("Média: %.1f", media);

    return 0;

}