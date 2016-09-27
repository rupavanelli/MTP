#include<stdio.h>
int binomial(int a , int n);
int main()
{
	int a,n;
	printf("Digite o numero de bolas: ");
	scanf("%d",&a);
	printf("Digite o numero de itens selecionados: ");
	scanf("%d",&n);
	if(binomial(a,n))
	printf("O binomial e: %d\n",binomial(a,n));
	else
	printf(" * ERRO ! \n");
	return 0;
}
int binomial(int a, int n)
{
	if(n>a)
	return 0;
	else
	return (n==0)? 1 : a*binomial(a-1,n-1)/n;
	
}
