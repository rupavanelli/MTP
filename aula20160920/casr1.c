#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mensagemparabens(int n);
int main()
{
	srand(time(0));
	int n;
	printf("Digite um valor: ");
	scanf("%d",&n);
	mensagemparabens(n);
	return 0;
}
void mensagemparabens(int n)
{
	int valor;
	valor=(rand()%10 + 1);
	if(valor==n)
	printf("\nParabens!");
	else
	prinft("Tente novamente!");
}

