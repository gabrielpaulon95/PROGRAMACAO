#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a, b, c;

printf("Digite o valor A: ");
scanf("%i", &a);

printf("Digite o valor B: ");
  scanf("%i", &b);

printf("Digite o valor C: ");
scanf("%i", &c);

  if ( a > b){
      if(a > c){
      printf("O maior valor e: %i ",a);
      }
      else{
          printf("O maior valor e: %i ",c);
      }
  }
else{
  printf("O maior valor e: %i ", b);
  }
  
  return 0;
}