#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari�veis
    float nota;

    setlocale(LC_ALL, "portuguese");

    // Informa��es
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    do
    {
        printf("Digite uma nota: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);

    // Exibi��o
    printf("\n");
    printf("Nota: %.1f \n", nota);

    return 0;
}