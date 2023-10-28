#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declarando variáveis
int idade;

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Informe sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18 && idade <= 65) {
        printf("Você é obrigado a votar!");
    } else {
        printf("Você não é obrigado a votar");
    }
 return 0;
}