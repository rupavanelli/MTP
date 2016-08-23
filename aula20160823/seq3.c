#include<stdio.h>
int main ()
{
    float A,B,C,Media=0;
    printf("Digite o valor de A, B e C respectivamente :");
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    Media=((A*2)+(B*3)+(C*5))/10.0;
    printf("\n A media e : %f \n",Media);
    return 0;
}
