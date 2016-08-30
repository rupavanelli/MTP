#include<stdio.h>
#include<math.h>
int main()
{
	float numero,base,novolog,novolog1;
	printf("Digite um numero e uma base: ");
	scanf("%f",&numero);
	scanf("%f",&base);
	novolog=log(numero)/log(base);
	printf("\n O novo log e: %f \n",novolog);
	return 0;
}
