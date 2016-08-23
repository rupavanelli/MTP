#include<stdio.h>
#include<time.h>
int main()

{
	srand(time(0));
	int valor;
	valor=rand()%7+rand()%7+rand()%7;
	if(valor==7 || valor==11)
	{
		printf("\n Voce ganhor com o valor de %d",valor);	}
	else
	{
		printf("\n Voce perdeu com o valor de %d\n",valor);
	}
	return 0;
	
}
