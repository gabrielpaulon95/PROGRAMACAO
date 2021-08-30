#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

float d, r;

printf(" COTACAO ATUAL DO DOLAR : 5,26 REAIS");

printf(" Digite a quantidade em dolares que quer converter em reais: ");
scanf("%f", &d);

r = d * 5.26;

printf(" %f dolares e equivalente a %.2f reais.", d, r);

return 0;
}