#include<stdio.h>
int main()
{
	int contagem=0;
	int vetor[]={0,1,2,4,8};//vai ser igual a 5(numero de posi��es que ele deve percorrer)//valor em bytes//20 bytes de mem�ria para percorrer 
	int tamanhovetor=sizeof(vetor)/sizeof(int);
	unsigned char *ponteiro= NULL; // como vou analisar byte a byte, pode ser do tipo char
	ponteiro=(unsigned char*)vetor;//endere�o do primeiro indiv�duo do vetor, &vetor[0]
	for(;ponteiro<vetor + tamanhovetor ;ponteiro++)
	{
		printf("%p : %X\n", ponteiro, *ponteiro);//mostra a posi��o que fooi guardada e o valor que tem dentro da posi��o
		if(*ponteiro==0x0)
		{
			contagem++;
		}
	}
	printf("Sao %d os bytes de memoria com apenas 0's.\n",contagem);
	return 0;
}
