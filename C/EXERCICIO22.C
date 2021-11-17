#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int numero;

printf ("Digite um numero: \n ");
scanf ("%i" , &numero);

while (numero <= 0){
    printf ("\nERRO, SOMENTE numeros POSITIVOS, \ndigite novamente: \n");
scanf ("%i" , &numero);
}
return 0;
}