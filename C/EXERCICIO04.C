#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int a, b, c, d, media;
printf("digite o valor A: ");
scanf("%i", &a);

printf("digite o valor B: ");
scanf("%i", &b);

printf("digite o valor C: ");
scanf("%i", &c);

printf("digite o valor D: ");
scanf("%i", &d);

    media = (a + b + c + d)/4;

    printf("a media aritmetica dos 4 valores selecionados e: %i", media);

    return 0;
}