#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
   int* y = (int*) malloc(sizeof(int));
   *y = 20;
   int z = sizeof(int);
   printf("*y=%i z=%i\n", *y, z);
   double g = 20.0/8;
   printf("%f\n", g);
    return 0;
}
