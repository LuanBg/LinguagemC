#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numero, par = 0, impar = 0, quantidadegeral = 0, somageral = 0, somapar = 0;
    float mediageral, mediapar;

    //
    do {
        printf("Digite o %d� n�mero: ", quantidadegeral + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            somageral += numero;
            quantidadegeral++;

            if (numero % 2 == 0) {
                somapar += numero;
                par++;
            } else {
                impar++;
            }

        }

    } while (numero != 0);

   // Cast
   mediageral = somageral / (float) quantidadegeral;
   mediapar = somapar / (float) par;

   //
   printf("\nQuantidade de n�meros pares: %d \n", par);
   printf("Quantidade de n�meros �mpares %d \n", impar);
   printf("M�dia dos m�meros pares: %.1f \n", mediapar);
   printf("M�dia geral: %.1f \n", mediageral);

  return 0;

}