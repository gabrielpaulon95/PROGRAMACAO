#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int seq,a,b,c, i, j;

printf("\nBEM VINDO!   \n");
printf("\nDigite a quantidade de numeros que deseja somar:  ");
scanf ("%i" , &i);
while ((i<0) || (i>100)){
    printf("\nNUMERO INVALIDO, DIGITE SOMENTE NUMEROS POSITIVOS: ");
    scanf ("%i" , &i);   
}
seq = 0;
a=0;
b=2;
j=1;
while(j<=i){
    seq = a + b;
    b=a;
    a = seq+2;
    j++;
}
return 0;
}