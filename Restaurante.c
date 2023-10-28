#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Declarando variáveis
    int codigo;

    setlocale(LC_ALL, "portuguese");

    // Menu
    printf("(-------------------------------------------------------- MENU ------------------------------------------------------) \n");
    printf("(--------------------------------------------------------------------------------------------------------------------) \n");
    printf("(           C�DIGO             |                         PRATOS                          |            VALOR          ) \n");
    printf("(             1                |                         PICANHA                         |           R$25,00         ) \n");
    printf("(             2                |                         LASANHA                         |           R$20,00         ) \n");
    printf("(             3                |                         STROGONOFF                      |           R$18,00         ) \n");
    printf("(             4                |                         BIFE ACEBOLADO                  |           R$15,00         ) \n");
    printf("(             5                |                         P�O COM OVO                     |           R$5,00          ) \n");
    printf("(-------------------------------------------------------- FIM -------------------------------------------------------) \n");
    printf("Digite o c�digo desejado: ");
    scanf("%d", &codigo);
    system("cls || clear");

    // Escolha do cliente
    switch (codigo)
    {
    case 1:
        printf("C�DIGO: 1 \n");
        printf("PRATO: PICANHA \n");
        printf("VALOR: R$25,00");
        break;
    case 2:
        printf("C�DIGO: 2 \n");
        printf("PRATO: LASANHA \n");
        printf("VALOR: R$20,00");
        break;
    case 3:
        printf("C�DIGO: 3 \n");
        printf("PRATO: STROGONOFF \n");
        printf("VALOR: R$18,00");
        break;
    case 4:
        printf("C�DIGO: 4 \n");
        printf("PRATO: BIFE ACEBOLADO \n");
        printf("VALOR: R$15,00");
        break;
    case 5:
        printf("C�DIGO: 5 \n");
        printf("PRATO: P�O COM OVO \n");
        printf("VALOR: R$5,00");
        break;
    default:
        printf("C�digo inv�lido!");
    }

    return 0;
}