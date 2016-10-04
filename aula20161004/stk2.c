#include<stdio.h>
#include<math.h>
float calcula_media(int *vet);
int desvio_padrao( int *vet,float media);
int main()
{
	int i=0;
	int vet[5];
	float media=0;
	for(i=0;i<5;i++)
	{
		printf("Digite o valor[%d]:",i+1);
		scanf("%d",&vet[i]);
	}
	media=calcula_media(vet);
	desvio_padrao(vet,media);
	printf("A media e: %f e o desvio padrao e: %f", media,desvio_padrao(vet,media));
	return 0;
}

float calcula_media(int *vet)
{
	int i=0;
	float soma=0;
	for(i=0;i<5;i++)
	{
		soma=soma+vet[i];
	}
	soma=(soma/5);
	return soma;
	
}
int desvio_padrao(int *vet,float media)
{
	float soma=0;
	float desvio;
	int j=0;
	for(j=0;j<5;j++)
	{
		soma+=pow(media-vet[j],2.f);
	}
	return sqrt((soma/sizeof(vet)/sizeof(int))-1);
}
