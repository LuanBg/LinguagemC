#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declarando vari�veis
int idade;

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Informe sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18 && idade <= 65) {
        printf("Voc� � obrigado a votar!");
    } else {
        printf("Voc� n�o � obrigado a votar");
    }
 return 0;
}