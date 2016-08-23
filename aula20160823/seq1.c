#include<stdio.h>
int main ()
{
    float lado_quadrado,area_quadrado=0.f;
    printf("Digite o lado: ");
    scanf("%f",&lado_quadrado);
    area_quadrado=(lado_quadrado*lado_quadrado);
    printf("\n A area e: %f\n",area_quadrado);
    return 0;
}
