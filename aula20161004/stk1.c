#include<stdio.h>
#define N 2
#define M 4
void preencher(float matriz[N][M]);
void imprimematriz(float matriz[N][M]);
void calculatransposta(float matriz[N][M],float transposta[M][N]);
void imprime_transposta(float transposta[M][N]);
int main()
{
	float matriz[N][M],transposta[M][N];
	preencher(matriz);
	imprimematriz(matriz);
	calculatransposta(matriz,transposta);
	printf("A transposta e: \n");
	imprime_transposta(transposta);
	return 0;
}
void preencher(float matriz[N][M])// passagem por referência
{
	int i=0,j=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
		printf("Digite o valor da posicao [%d,%d] :",i+1,j+1);
		scanf("%f",&matriz[i][j]);
	}
	}
}
void calculatransposta(float matriz[N][M],float transposta[M][N])
{
	int i=0,j=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		transposta[j][i]=matriz[i][j];
	}
}
void imprimematriz(float matriz[N][M])
{
	int i=0,j=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%g%c",matriz[i][j],(j!= M-1)? '\t' : '\n');
		}
	}
}
void imprime_transposta(float transposta[M][N])
{
	int i=0,j=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		printf("%g%c",transposta[i][j],(j!=N-1)? '\t' : '\n');
	}
}
