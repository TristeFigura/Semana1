#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int * ptr;
    int ** pptr;

    int valor = 10;

    ptr = &valor;
    pptr = &ptr;

    printf("Endereco de ptr = %x\n", &ptr);
    printf("Endereco de pptr = %x\n", &pptr);

    printf("Valor ptr = %d\n", *ptr);
    printf("Valor pptr = %d\n", **pptr);

    return EXIT_SUCCESS;
}
