#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int numeros[10];
    int compara;
    compara=0;

    printf("digite os 10 valores: ");

    for(int i=0;i<10;i++){
        scanf("%i", &numeros[i]);
        }
    for(int i=0;i<10;i++){
        if(numeros[i] >=compara){
            compara=numeros[i];
        }
            }
            printf("o maior numero e: %i",compara);

            return 0;
}