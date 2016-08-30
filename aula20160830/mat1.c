#include<stdio.h>
#include<math.h>
int main()
{
    float p1_x,p2_x,p1_y,p2_y,d;
    printf("Digite respectivamente as coordenadas x e y de dois pontos distintos: ");
    scanf("%f",&p1_x);
    scanf("%f",&p1_y);
    scanf("%f",&p2_x);
    scanf("%f",&p2_y);
    d=sqrt(pow(p2_x-p1_x,2.)+pow(p2_y-p1_y,2.));
    printf("\n A distancia entre eles e: %f \n",d);
    return 0;
}

