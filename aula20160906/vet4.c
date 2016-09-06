#include<stdio.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i=0;
	float vet[10000];
	float n,aux1=vet[0],aux2=vet[0];
	printf("Digite um valor: ");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		vet[i]=rand()%10;
		
	}
	for(i=0;i<n;i++)
	{
		if(aux1>=vet[i])
		{
			aux1=vet[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(aux2<=vet[i])
		{
			aux2=vet[i];
		}
	}	
	printf("\n O minimo e : %f e o maximo e %f",aux1,aux2);	 
	
}
