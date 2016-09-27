#include<stdio.h>
struct divisores
{
	int num;
	int den;
};
struct divisores divisao_geral(int num, int den,int num1, int den1);
int main()
{
	int num, den,num1,den1;
	struct divisores resposta;
	printf("Digite um numerador e um denominador: ");
	scanf("%d/%d",&num,&den);
	printf("Digite um numerador e um denominador: ");
	scanf("%d/%d",&num1,&den1);
	resposta=divisao_geral(num,den,num1,den1);
	printf("\nA soma dos valores e: %d/%d",resposta.num,resposta.den);
	return 0;
}
struct divisores divisao_geral(int num, int den,int num1, int den1)
{
	struct divisores resposta;
	resposta.num=(num*den1)+(num1*den);
	resposta.den=den*den1;
	return resposta;
	
}
