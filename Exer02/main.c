#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    printf("Entre com dois numeros inteiros: \n");
    scanf("%i %i", &a, &b);

    if (a % b == 0) {
        printf("A e divisivel por B.");
    }
    else {
        printf("Nao e divisivel.");
    }

    return 0;
}
