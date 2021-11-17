#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int tab, r;
tab = 0;
printf("\nBEM VINDO!   \nTABOADA DO 5\n");

while ( tab < 10){
    tab++;
    r = tab * 5;
     
    printf("\n %i X 5 = %i" , tab, r );
   
}
return 0;
}
 