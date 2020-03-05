#include <stdio.h>
#include <stdlib.h>

int main() {

    double metros;

    printf("Entre com o valor em metros: \n");
    scanf("%f", &metros);

    int decimetro;
    double centimetro;
    double milimetro;

    decimetro = metros/10;
    centimetro = metros/100;
    milimetro = metros/1000;

    printf("Decimetros: %f\n", decimetro);
    printf("Centimetros: %f\n", centimetro);
    printf("Milimetro: %f\n", milimetro);


    return 0;
}
