#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Vari�veis
    int num;

    setlocale(LC_ALL, "portuguese");

    //
    printf("Digite um número: ");
    scanf("%d", &num);
    system("cls || clear");

    //
    if (num % 2 == 0) 
        printf("%d � par \n", num);
    else 
        printf("%d � �mpar \n", num);

    return 0;
}