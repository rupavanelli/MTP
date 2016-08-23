#include<stdio.h>
int main()
{
    float lado_triangulo,altura_triangulo,area_triangulo;
    printf("Digite a base e a altura respectivamente:");
    scanf("%f",&lado_triangulo);
    scanf("%f",&altura_triangulo);
    area_triangulo=(lado_triangulo*altura_triangulo)/2.0;
    printf("\n A area do triangulo e : %f \n",area_triangulo);
    return 0;
}
