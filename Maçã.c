#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Declarando variáveis
    int macas;
    float valordes, valorsemdes;

    setlocale(LC_ALL, "portuguese");

    printf("--------------------------------------------------- Pre�o da ma�� --------------------------------------------------- \n");
    printf("ACIMA DE UMA D�ZIA                                        |                                       ABAIXO DE UMA D�ZIA \n");
    printf("R$1,00                                                    |                                                    R$1,30 \n");
    printf("--------------------------------------------------------------------------------------------------------------------- \n");
    printf("\n");
    printf("Digite a quantidade: ");
    scanf("%d", &macas);
    system("cls || clear");

    valordes = (macas * 1.0);
    valorsemdes = (macas * 1.30);

    if (macas > 12)
    {
        printf("Quantidades de ma��s: %d \n", macas);
        printf("Pre�o total: R$ %.2f", valordes);
    }
    else
    {
        printf("Quantidades de ma��s: %d \n", macas);
        printf("Pre�o total: R$ %.2f", valorsemdes);
    }

    return 0;
}