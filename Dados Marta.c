#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;    // inteiro
    float peso = 80.2; // real
    char sexo = 'F';   // apenas um caracter
    char nome [200] = "Marta"; // cadeia de caracteres

    printf("Idade: %d anos. \n", idade);
    printf("Peso: %.3f Kg. \n", peso);
    printf("Sexo: %c. \n", sexo);
    printf("Nome: %s. \n", nome);
    return 0;
}
