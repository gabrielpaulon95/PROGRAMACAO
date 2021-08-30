#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int b, h, r;

printf("Digite o valor da base do TRIANGULO: ");
scanf("%i", &b);

printf("Digite o valor da altura do TRIANGULO: ");
  scanf("%i", &h);

  r = (b * h)/2;

  printf("A area do TRIANGULO e: %i ", r);

  return 0;
}