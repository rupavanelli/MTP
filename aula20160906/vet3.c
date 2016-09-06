#include<stdio.h>

int main()
{
	int i=0,j=0;
	float soma=0;
	float produto=1;
	int vet[10];
	for(i=0;i<10;i++)
	{
		printf("Digite o %d valor: ",i+1);
	    scanf("%d",&vet[i]);
	

	}
	for(i=0;i<10;i++)
	{
	
	        soma=soma+vet[i];
	    	produto=produto*vet[i];
	    }
	    

	
	printf("\n A media e o produto sao respectivamente: %g e %f",soma/10,produto);
	return 0;
}
	
