#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float p1, p2, m;

printf("Digite a nota da P1: ");
scanf ("%f", &p1);

printf("Digite a nota da P2: ");
scanf ("%f", &p2);

m= (p1+(2*p2))/3;

if (m >= 5){
    printf("APROVADO");
}
else{
    printf("REPROVADO");
    }
return 0;
}