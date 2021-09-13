#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float ac, ve, t , V;

printf("\nDigite a velocidade inicial: ");
scanf("%f", &ve);

printf("\nDigite a aceleracao: ");
scanf ("%f", &ac);

printf("\nDigite o tempo do percurso: ");
  scanf("%f", &t);

  V = ve + (ac * t);

  if ( V > 120){
      printf("\nVEICULO MUITO RAPIDO");
  }
  else{
      if ((V <= 120 ) && ( V > 80)){
          printf("\nVEICULO RAPIDO");
      }
      else if (( V > 60) && (V <= 80)){
          printf("\nVELOCIDADE DE CRUZEIRO");
      }
      else{
          if((V <= 60) && (V > 40)){
              printf("\nVWLOCIDADE PERMITIDA");
          }
          else{
              printf("\nVEICULO MUITO LENTO");
          }
      }
  }
  return 0;
}