#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int i;

    setlocale(LC_ALL, "portuguese");

    // i = i + 1
    // i++

    // Demonstração
    for (i = 0; i <= 10; i++)
        printf("1 X %d = %d \n", i, 1 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("2 X %d = %d \n", i, 2 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("3 X %d = %d \n", i, 3 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("4 X %d = %d \n", i, 4 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("5 X %d = %d \n", i, 5 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("6 X %d = %d \n", i, 6 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("7 X %d = %d \n", i, 7 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("8 X %d = %d \n", i, 8 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("9 X %d = %d \n", i, 9 * i);
    printf("\n");

    for (i = 0; i <= 10; i++)
        printf("10 X %d = %d \n", i, 10 * i);
    printf("\n");

    return 0;
}