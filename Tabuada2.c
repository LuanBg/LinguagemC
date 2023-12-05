#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int i, numero;

    setlocale(LC_ALL, "portuguese");

    // Escolha do usuário
    printf("Digite um número de 1 à 10: ");
    scanf("%d", &numero);
    system("cls || clear");

    // 
    for (i = 0; i <= 10; i++) 
        printf("%d X %d = %d \n", numero, i, numero * i);
    printf("\n");
    
    return 0;
}
