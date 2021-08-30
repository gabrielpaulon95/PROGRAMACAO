#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int b, h, r;

printf("Digite o valor da base do RETANGULO: ");
scanf("%i", &b);

printf("Digite o valor da altura do RETANGULO: ");
  scanf("%i", &h);

  r = b * h;
if ( r > 100){
    printf("A area do RETANGULO e: %i ", r);
    printf(" \nTERRENO GRANDE");
}
else{
    printf("A area do RETANGULO e: %i ", r);
    printf("\n TERRENO PEQUENO");

}
  

  return 0;
}
