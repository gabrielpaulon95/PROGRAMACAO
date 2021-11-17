#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
char sexo;

printf("\nBEM VINDO!   \n\n Digite o sexo escolhido:  ");
scanf("%s",&sexo);

while ((toupper(sexo) != 'M') && (sexo != 'F')){
printf("\nSEXO ESCOLHIDO INVALIDO!\nFAVOR DIGITE NOVAMENTE:\n   ");
 scanf("%s", &sexo); 
}
printf("OBRIGADO");
return 0;
}
