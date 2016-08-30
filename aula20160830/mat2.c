#include<stdio.h>
#include<math.h>
int main()
{
	float lado1,lado2,angulo=1,lado3=1,l;
	printf("Digite dois lados de um triângulo e o ângulo entre eles :");
	scanf("%f",&lado1);
	scanf("%f",&lado2);
	scanf("%f",&angulo);
	angulo=(3.1415*angulo)/180;
	printf("%f",angulo);
	l=pow(lado1,2)+pow(lado2,2)-2*lado1*lado2*cos(angulo);
	lado3=sqrt(l);
	printf("\n O terceiro lado e %f",lado3);
	return 0;
}
