#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaN(int n1, int n2) {
    return n1 + n2;
}
int subtracaoN(int n1, int n2) {
    return n1 - n2;
}
float divisaoN(int n1, int n2) {
    return n1 / (float) n2;
}
int multiplicacaoN(int n1, int n2) {
    return n1 * n2;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    //
    int n1, n2, soma, subtracao, multiplicacao;
    float divisao;

    //
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    system("cls || clear");

    soma = somaN(n1, n2);
    subtracao = subtracaoN(n1, n2);
    divisao = divisaoN(n1, n2);
    multiplicacao = multiplicacaoN(n1, n2);

    //
    printf("\nPrimeiro n�mero: %d \n", n1);
    printf("Segundo n�mero: %d \n", n2);
    printf("Soma: %d \n", soma);
    printf("Subtra��o: %d \n", subtracao);
    printf("Divis�o: %.2f \n", divisao);
    printf("Multiplica��o: %d", multiplicacao);
  
    return 0;

}