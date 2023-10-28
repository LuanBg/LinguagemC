#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    char sexo;
    float pesoideal, altura;

    // Informações
    printf("Informe seu sexo: ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    system("cls || clear");

    // Converter em maiúsculo
    sexo = toupper(sexo);

    // Resultado
    switch (sexo)
    {
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        break;
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        break;
    default:
        printf("Opção inválida!");
    }

    printf("Sexo: %c \n", sexo);
    printf("Altura: %.2f \n", altura);
    printf("Peso ideal: %.2f Kg\n", pesoideal);

    return 0;
}