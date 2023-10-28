#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Variáveis
    float media;
    int numero;
    int soma = 0; 
    int quantidade = 0;

    //
    do {
        printf("Digite o %d° número: ", quantidade + 1);
        scanf("%d", &numero);

        if(numero > 0) {
            soma += numero;
            quantidade++;
        }
        
    } while (numero > 0);

    media = soma / (float)quantidade; // Cast 2 -> 2.0

    //
    printf("\nMédia: %.1f \n", media);

  return 0;  

}