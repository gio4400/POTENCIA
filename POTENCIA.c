#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int potencia, base, fin=1, a;

    printf("\n\tPROGRAMA PARA CALCULAR POTENCIA\n");

    printf("\nIngrese base: ");
    scanf("%i",&base);
    printf("\nIngrese potencia: ");
    scanf("%i",&potencia);
  printf("\n%i ^ 0 = 1",base);
for(a=1;a<=potencia;a++)
{
    fin=(base*fin);

    printf("\n%i ^ %i = %i",base,a,fin);
}
printf("\n\n\n");
system("pause");
return 0;
}
