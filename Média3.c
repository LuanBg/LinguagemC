#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    //Variáveis
    int i;
    float nota, soma, media;
    char resultado [200];

    //
    for (i = 0; i < 3; i++) {
        do {
            printf("Digite a %d° nota: ", i + 1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;

    }

    media = soma / i;

    if (media >= 7) {
        strcpy(resultado, "Aprovado!");
    } else if (media >= 5) {
        strcpy(resultado, "Recuperação!");
    } else {
        strcpy(resultado, "Reprovado!");
    }

    printf("\nMédia: %.1f \n", media);
    printf("Resultado: %s \n", resultado);

    return 0;

}