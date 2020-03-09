#include <stdio.h>
#include <stdlib.h>

int main() {

    double metros;

    printf("Entre com o valor em metros: \n");
    scanf("%d", &metros);

    double decimetro = metros/10;
    double centimetro = metros/100;
    double milimetro = metros/1000;

    printf("Entrada em metros: %d\n", metros);
    printf("Decimetros: %d\n", decimetro);
    printf("Centimetros: %d\n", centimetro);
    printf("Milimetro: %d\n", milimetro);


    return 0;
}
