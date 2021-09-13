#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int ca, co, hi, so, hip, tr;

printf("Digite o valor A: ");
scanf("%i", &ca);

printf("Digite o valor B: ");
  scanf("%i", &co);

printf("Digite o valor C: ");
scanf("%i", &hi);

so = (ca * ca) + (co * co);
hip = (hi * hi );

if( so == hip){
    printf(" FORMAM UM TRIANGULO RETANGULO");
}
else{
    printf("NAO FORMA UM TRIANGULO RETANGULO");
}
}
