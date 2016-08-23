#include<stdio.h>
int main()
{
	float base_exp, pot_exp, res_exp=1,cont=0,i;
	printf("Digite uma base e uma potencia para serem calculados, respectivamene: ");
	scanf("%f",&base_exp);
	scanf("%f",&pot_exp);
	while(cont<pot_exp)
	{
		res_exp=res_exp*base_exp;
		cont=cont+1;
		
	}
	printf("\n O valor da exponencial e %f \n",res_exp);
	return 0;
}
