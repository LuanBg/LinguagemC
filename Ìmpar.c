#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Variáveis
    int i;

    setlocale(LC_ALL, "portuguese");

    //
    for (i = 1; i <= 15; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
    }
    
    return 0;

}