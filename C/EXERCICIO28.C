#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    int tab, r,i;
    char tecla;
tab = 1;
i=0;
printf("\nBEM VINDO!   \nTABOADA\n");
while(tab <=20){
for( i=0;i <=10;i++){
   
    r = tab * i;

    printf("\n %i X %i = %i" , tab,i, r );
    
      
    }
 
printf("\nPRESSIONE QUALQUER TECLA PARA CONTINUAR");
    
    getch();

    printf("\nOBRIGADO");
tab++;
}
return 0;
}