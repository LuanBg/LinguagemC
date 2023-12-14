#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int numeros[5], i, par = 0, impar = 0, positivo = 0, negativo = 0, maior = 0, menor = 99999, somapar = 0, somaimpar = 0, somageral = 0;
    float mediapar, mediaimpar, mediageral;

    //
    for (i = 0; i < 5; i++) {
       printf("Digite um n�mero: ");
       scanf("%d", &numeros[i]);

       if (numeros[i] % 2 == 0) {
        par++;
        somapar += numeros[i];
       } else {
        impar++;
        somaimpar += numeros[i];
       }

       if (numeros[i] > 0) {
        positivo++;
       }

       if (numeros[i] < 0) {
        negativo++;
       }

       if (numeros[i] > maior) {
        maior = numeros[i];
       }

       if (numeros[i] < menor) {
        menor = numeros[i];
       }

       somageral += numeros[i]; 

    }

    mediapar = somapar / (float) par;
    mediaimpar = somaimpar / (float) impar;
    mediageral = somageral / (float) i;
   
   //
   printf("\nQuantidade de n�meros pares: %d \n", par);
   printf("Quantidade de n�meros �mpares: %d \n", impar);
   printf("Quantidade de n�meros positivos: %d \n", positivo);
   printf("Quantidade de n�meros negativos: %d \n", negativo);
   printf("Maior de n�mero: %d \n", maior);
   printf("Menor de n�mero: %d \n", menor);
   printf("Quantidade de n�meros inseridos: %d \n", i);
   printf("M�dia dos n�meros pares: %.1f \n", mediapar);
   printf("M�dia dos n�meros �mpares: %.1f \n", mediaimpar);
   printf("M�dia geral dos n�meros inseridos: %.1f \n", mediageral);

   printf("\nExibindo os valores de forma inversa...\n");

   for (i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

  return 0;

}