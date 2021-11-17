#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int numeros[20];
    int consta;
    consta=5;

    printf("digite os 20 valores: ");

    for (int i=0;i<20;i++){
        scanf("%i", &numeros[i]);
    }
 printf("os numeros digitados multiplicados por 5 sao: %i");

 for(int i=0;i<20;i++){
     if(numeros[i]= consta * numeros[i]);
     printf("%i",numeros[i]);

 }
 return 0;
}
