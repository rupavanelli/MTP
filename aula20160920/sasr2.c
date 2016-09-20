#include<stdio.h>
void pares();
void impares();
int main()
{
	int opcao;
	printf("Digite 1 para pares e 2 para impares: ");
	scanf("%d",&opcao);
	if(opcao==1)
		pares();
	else
		impares();
	return 0;
}
void pares()
{
	int i=0,vet[5],c=0;
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			vet[c]=i;
			c++;
		}
	}
	for(i=0;i<sizeof(vet)/sizeof(int);i++)
		printf("%d\n",vet[i]);

}
void impares()
{
	int i=0,vet[4],c=0;
	for(i=0;i<=10;i++)
	{
		if(i%2==1)
		{
			vet[c]=i;
			c++;
		}
	}
	for(i=0;i<sizeof(vet)/sizeof(int);i++)
		printf("%d",vet[i]);

}
