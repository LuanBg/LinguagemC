#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // V
    char operacao;
    int valorA, valorB, adicaoAB, subtracaoAB, multiplicacaoAB;
    float divisaoAB;
    //
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    printf("Qual opera��o voc� deseja aplicar? \n");
    scanf("%s", &operacao);

    //
    adicaoAB = (valorA + valorB);
    subtracaoAB = (valorA - valorB);
    if (valorB != 0) {
        divisaoAB = (float)valorA / valorB;
    } else {
        printf("Erro: divis�o por zero!\n");
        return 1;
    }
    multiplicacaoAB = (valorA * valorB);

    //
    switch (operacao)
    {
    case '+':
        printf("\nO resultado �: %d", adicaoAB);
        break;
    case '-':
        printf("\nO resultado �: %d", subtracaoAB);
        break;
    case '/':
        printf("\nO resultado �: %.1f", divisaoAB);
        break;
    case '*':
        printf("\nO resultado �: %d", multiplicacaoAB);
        break;
    default:
        printf("Op��o inv�lida!");
    }

    return 0;
}