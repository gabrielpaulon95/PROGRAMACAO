#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float p, a, r;

printf("Digite o PESO da pessoa: ");
scanf("%f", &p);

printf("Digite a ALTURA da pessoa: ");
  scanf("%f", &a);

  r = p / (a * a);
if ( r >= 25){
    printf("seu IMC e: %.1f ", r);
    printf(" \nACIMA DO PESO");
}
else{
        if (r >=20 ){
            printf("seu IMC e: %.1f ", r);
    printf(" \nPESO IDEAL");
        }
        else{
            printf("seu IMC e: %.1f ", r);
    printf(" \nABAIXO DO PESO");

        }
    }

  return 0;
}
