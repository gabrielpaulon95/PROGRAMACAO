#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float p1, p2;

printf("Digite a nota da P1: ");
scanf("%f" , &p1);

p2=((15-p1)/2);

printf("PARA SER APROVADO SUA NOTA DA P2 PRECISA SER: %.1f", p2);

return 0;
}
