#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

float a, b, c, d, e, t, p, tr;

printf(" Digite o valor do item A: ");
scanf("%f", &a);

printf(" Digite o valor do item B: ");
scanf("%f", &b);

printf(" Digite o valor do item C: ");
scanf("%f", &c);

printf(" Digite o valor do item D: ");
scanf("%f", &d);

printf(" Digite o valor do item E: ");
scanf("%f", &e);

t = a + b + c + d + e;

printf("o valor total da compra e %.2f reais", t);

printf("digite o valor pago: ");
scanf("%f", &p);

tr = p - t;

printf("O troco sera de: %.2f reais", tr);
return 0;
}
