#include<stdio.h>
int main()
{
	int i,n,k,aux,j;
	int vet[10];
	for(i=0;i<10;i++)
	{ 
	
	printf("Digite o %d valor ",i+1);
	scanf("%d",&vet[i]);
}
	for(k=0;k<7;k++)
	{
		j=10-k-1;
        aux = vet[k];
        vet[k] = vet[j];
        vet[j] = aux;
	}
	for(i=0;i<10;i++)
	printf("\n %d",vet[i]);
	return 0;

}
