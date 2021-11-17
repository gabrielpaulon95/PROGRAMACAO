#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int numero,r;

printf("\nBEM VINDO!   \n");
numero = 0;
r=0;
while( numero <100){
   numero++;
  r= numero +r;
 }
    
    printf("\n %i\n" , r );
    
return 0;
}