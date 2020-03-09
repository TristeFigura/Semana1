#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat = 6;


    int cont;
    int res = 1;
    printf("Fatorial de %i: ", fat);
    for (cont = 1; cont <= fat; cont++) {
        res *= cont;
        printf("%i * ", cont);
    }
    printf(" = %i ", res);
    return 0;
}
