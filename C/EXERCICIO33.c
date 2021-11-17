#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
int numeros[10];

printf("Digite  10 valores:\n ");
for (int i=0;i<10;i++){
    scanf("%i", &numeros[i]);
}
printf("Os numeros digitados são: ");
for (int i=9; i>=0;i--){
    printf("%i\n ",numeros[i]);
}
return 0;
}