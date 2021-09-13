#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float p, a, r;
char sexo;

printf("\nDigite o sexo da pessoa: ");
scanf ("%c", &sexo);

printf("\nDigite o PESO da pessoa: ");
scanf("%f", &p);

printf("\nDigite a ALTURA da pessoa: ");
  scanf("%f", &a);

  r = p / (a * a);
if ( sexo == 'h'){
if ( r >= 25){
    printf("seu IMC e: %.1f ", r);
    printf(" \n HOMEM ACIMA DO PESO");
}
else{
        if (r >=20 ){
            printf("seu IMC e: %.1f ", r);
    printf(" \nHOMEM COM PESO IDEAL");
        }
        else{
            printf("seu IMC e: %.1f ", r);
    printf(" \nHOMEM ABAIXO DO PESO");

        }
    }
}
else{
    if ( r >= 24){
    printf("seu IMC e: %.1f ", r);
    printf(" \nMULHER ACIMA DO PESO");
}
else{
        if (r >=19 ){
            printf("seu IMC e: %.1f ", r);
    printf(" \nMULHER COM PESO IDEAL");
        }
        else{
            printf("seu IMC e: %.1f ", r);
    printf(" \nMULHER ABAIXO DO PESO");

        }
    }

}

  return 0;
}
