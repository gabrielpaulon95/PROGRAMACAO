#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

float p, a, r;
printf("digite o peso da pessoa em Kg: ");
scanf("%f", &p);

printf("digite a altura da pessoa em metros: ");
scanf("%f", &a);

r = p/(a * a); 

printf("O IMC da pessoa e: %.1f", r);

return 0;

}