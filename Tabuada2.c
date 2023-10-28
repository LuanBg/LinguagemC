#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari·veis
    int i, numero;

    setlocale(LC_ALL, "portuguese");

    // Escolha do usu·rio
    printf("Digite um n√∫mero de 1 √† 10: ");
    scanf("%d", &numero);
    system("cls || clear");

    // 
    for (i = 0; i <= 10; i++) 
        printf("%d X %d = %d \n", numero, i, numero * i);
    printf("\n");
    
    return 0;
}