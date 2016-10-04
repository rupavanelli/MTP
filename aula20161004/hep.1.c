#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float media(float * dados, int ndados);
float desvio_padrao(float * dados, int ndados);
void recece(float *dados, int ndados);
int main()
{
	int ndados;
	float *dados;//ponteiro
	printf("Informe a quantidade dos dados: ");
	scanf("%d",&ndados);
	dados=malloc(ndados*sizeof(float));//aloco uma região com tamanho ndados * tamanho do tipo do dado
	recebe(dados,ndados);
	printf("Media %g; Desvio-padrao %g \n",media(dados,ndados),desvio_padrao(dados,ndados));
	free(dados);
	return 0;
}

void recebe( float *dados, int ndados)
{
	int i=0;
	for(i=0;i<ndados;i++)
	{
		printf("Entre com o dado #%d: ",i+1);
		scanf("%f",&dados[i]);
	}
}
float media(float * dados, int ndados)//os dados(sendo um vetor) e a quantidade deles
{
	float soma=0.f;
	int i=0;
	for(i=0;i<ndados;i++)
	{
		soma=soma+dados[i];
	}
	return soma/ndados;
}
float desvio_padrao(float * dados, int ndados)
{
	int i;
	float soma=0;
	float m=media(dados,ndados);		
	for(i=0;i<ndados;i++)
	{
		soma=soma+pow(m-dados[i],2.f);
	}
	return sqrt(soma/(ndados-1));
	
	
}

