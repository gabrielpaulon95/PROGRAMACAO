#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a, b;

printf("Digite o valor A: ");
scanf("%i", &a);

printf("Digite o valor B: ");
  scanf("%i", &b);

  if ( a >= b){
      if (a > b){
           printf("O maior valor e: %i ",a);
}
else{
    printf ("OS VALORES SAO IDENTICOS");
}
  }
      
else{
  printf("O maior valor e: %i ", b);
  }

  return 0;
}