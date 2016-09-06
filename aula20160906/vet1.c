#include<stdio.h>
#include<time.h>
#define N 10000
int main()
{
	srand(time(0));
	int n,i;
	float soma=0.f;
	int vet[N];
	printf("Digite um valor nao negativo: ");
	scanf("%d",&n);
	for(i=0;i<N;i++)
	{
		vet[i]=rand()%n + 1;
	}
	for(i=0;i<N;i++)
	{
		soma=soma+vet[i];
		
	}
	printf("\n A media e: %g \n ",soma/N);
	return 0;
}
