#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    // V
    int metro, decimetro, centimetro, milimetro;
    float decametro, hectometro, quilometro; 

    //
    printf("Informe um valor em até 3 dígitos: ");
    scanf("%d", &metro);

    //
    quilometro = (metro / 1000.0);
    hectometro = (metro / 100.0);
    decametro = (metro / 10.0);
    decimetro = (metro * 10);
    centimetro = (metro * 100);
    milimetro = (metro * 1000);

    // 
    printf("\nValor em quilômetro: %.3fkm \n", quilometro);
    printf("Valor em hectômetro: %.2fhm \n", hectometro);
    printf("Valor em decâmetro: %.1fdam \n", decametro);
    printf("Valor em metros: %dm \n", metro);
    printf("Valor em decímetros: %ddm \n", decimetro);
    printf("Valor em centímetros: %dcm \n", centimetro);
    printf("Valor em milímetros: %dmm \n", milimetro);


    return 0;

}