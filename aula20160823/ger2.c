#include<stdio.h>
#include<time.h>
int main()
{
	srand(time(0));
	float numeroescolhido,x,cont;
	x=rand()%100;
	do
	{
	printf("Escolha um numero: ");
	scanf("%f",&numeroescolhido);
	if(numeroescolhido<x){
		printf("\n baixo \n");
	}
	if(numeroescolhido>x){
		printf("\n alto \n");
	}
	cont++;
}
	while(x!=numeroescolhido);
    printf("\n Voce acertou!E suas tentativas foram: %f \n",cont);
	return 0;

}
