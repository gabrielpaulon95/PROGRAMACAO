#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

int numero , intervaloA,intervaloB, tab;

printf ("Digite um numero: \n\n ");
scanf ("%i" , &numero);

while( numero <= 0){
        printf(" NUMERO INVALIDO, POR FAVOR DIGITE NOVAMENTE\n SOMENTE NUMEROS POSITIVOS\n\n");
        scanf("%i" , &numero);
}

printf ("Digite o  valor inicial do intervalo que deseja iniciar a taboada: \n\n ");
scanf ("%i" , &intervaloA);

printf ("Digite o  valor final do intervalo que deseja finalizar a taboada: \n\n ");
scanf ("%i" , &intervaloB);
 if (intervaloA > intervaloB){
     printf ("VALOR INVALIDO, digite novamente: \n\n ");
     scanf("%i" ,&intervaloB);
 }

    for(intervaloA; intervaloA<=intervaloB ; intervaloA++){
    tab = numero * intervaloA;
    printf ("\n%i X %i = %i\n" ,numero, intervaloA, tab);
}
 
return 0;


 }





