#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    int i;
    float nota, soma = 0, media;

    //
    for (i = 0; i < 2; i++) {
        do {
            printf("Digite a %d° nota: ", i + 1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;

    }

    media = soma / i;

    //
    printf("\nMédia: %.1f \n", media);

    return 0;

}