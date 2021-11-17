#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int fibo,a,b;

printf("\nBEM VINDO!   \n");
fibo = 1;
a=0;
b=1;

while(fibo <832040){
    fibo = a + b;
    b=a;
    a=fibo;
    printf("\n %i\n" , fibo);
}

return 0;
}