#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    //Variáveis
    int contador = 0;
    float nota, soma = 0, media;
    char resposta;

    //
    do {
        printf("Digite uma nota: ");
        scanf("%f", &nota);

        soma += nota;
        contador++;

        fflush(stdin);

        printf("Deseja inserir mais uma nota? ");
        printf("\nS - Sim \nN - Não \nResposta: ");
        scanf("%c", &resposta);

        resposta = toupper(resposta);

    } while (resposta != 'N');

    media = soma / contador;

    //
    printf("\nMédia: %.1f", media);

    return 0;

}