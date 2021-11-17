#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a , b;

printf ("BEM VINDO \nDigite o primeiro numero: ");
scanf("%i" , &a);

printf ("Digite o segundo numero: ");
scanf("%i" , &b);

while ( a >= b){
    printf ("\n ERRO, o primeiro numero nao pode ser maior que o segundo!\n\nDigite novamente o segundo numero: ");
scanf("%i" , &b);
}
return 0;
}