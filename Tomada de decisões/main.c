#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  char c;
  printf("Digite um caracter em letra min�scula: ");
  scanf("%c", &c);

  if (c >= 'a') {
    printf("Segue a letra que voc� digitou em mai�scula:  %c  ", toupper(c));

  }

    return 0;
}
