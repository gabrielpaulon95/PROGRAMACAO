#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int a,imp,n;
    a=1;
    imp=1;

printf("\nBEM VINDO!   \n");
printf("\nDigite a quantidade de numeros que deseja somar:  ");
scanf ("%i" , &n);
while ((n<=0) && (n<100)){
    printf("\nNUMERO INVALIDO, DIGITE SOMENTE NUMEROS POSITIVOS: ");
    scanf ("%i" , &n);   
}
for(int i=0; i<n; i++){
a=imp+a;
printf("%i  ",a);
imp =imp+2;
}

return 0;
}