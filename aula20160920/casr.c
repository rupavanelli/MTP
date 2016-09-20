#include<stdio.h>
#include<math.h>
void converter(int v, float n, char l);
int main()
{
	int valor;
	float numero;
	char letra[1];
	printf("Digite um valor inteiro: ");
	fflush(stdin);
	scanf("%d",&valor);
	printf("Digite um valor do tipo ponto flutuante: ");
	fflush(stdin);
	scanf("%f",numero);
	printf("Digite um caractere: ");
	fflush(stdin);
	fgets(letra,1,stdin);
	converter(valor,numero,letra);
	return 0;
}
void converter( int v, float n, char l)
{
	int valor1;
	float numero1;
	char letra1;
	valor1=pow(v,2);
	numero1=sqrt(n);
	letra1=tolower(l);
	printf("Os novos valores: %d %f %c",valor1,numero1,letra1);
}
