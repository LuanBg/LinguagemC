#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Declarando variÃ¡veis
    int codigo;

    setlocale(LC_ALL, "portuguese");

    // Menu
    printf("(-------------------------------------------------------- MENU ------------------------------------------------------) \n");
    printf("(--------------------------------------------------------------------------------------------------------------------) \n");
    printf("(           CÓDIGO             |                         PRATOS                          |            VALOR          ) \n");
    printf("(             1                |                         PICANHA                         |           R$25,00         ) \n");
    printf("(             2                |                         LASANHA                         |           R$20,00         ) \n");
    printf("(             3                |                         STROGONOFF                      |           R$18,00         ) \n");
    printf("(             4                |                         BIFE ACEBOLADO                  |           R$15,00         ) \n");
    printf("(             5                |                         PÃO COM OVO                     |           R$5,00          ) \n");
    printf("(-------------------------------------------------------- FIM -------------------------------------------------------) \n");
    printf("Digite o código desejado: ");
    scanf("%d", &codigo);
    system("cls || clear");

    // Escolha do cliente
    switch (codigo)
    {
    case 1:
        printf("CÓDIGO: 1 \n");
        printf("PRATO: PICANHA \n");
        printf("VALOR: R$25,00");
        break;
    case 2:
        printf("CÓDIGO: 2 \n");
        printf("PRATO: LASANHA \n");
        printf("VALOR: R$20,00");
        break;
    case 3:
        printf("CÓDIGO: 3 \n");
        printf("PRATO: STROGONOFF \n");
        printf("VALOR: R$18,00");
        break;
    case 4:
        printf("CÓDIGO: 4 \n");
        printf("PRATO: BIFE ACEBOLADO \n");
        printf("VALOR: R$15,00");
        break;
    case 5:
        printf("CÓDIGO: 5 \n");
        printf("PRATO: PÃO COM OVO \n");
        printf("VALOR: R$5,00");
        break;
    default:
        printf("Código inválido!");
    }

    return 0;
}