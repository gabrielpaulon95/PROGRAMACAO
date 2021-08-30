#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

float c, f;

printf(" Digite a temperatura em celsius: ");
scanf("%f", &c);

f = (c * 1.8) + 32;

printf(" %f graus celsius e equivalente a %.1f fahrenheit.", c, f);

return 0;
}

