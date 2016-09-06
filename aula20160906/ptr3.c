#include<stdio.h>

int main()
{
	int contagem=0;
	int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
	int tamanhodovetor = sizeof(vetor)/sizeof(int);
	unsigned char *ponteiro=NULL;//como vou comparar byte a byte, pode ser do tipo char
	ponteiro=(unsigned char*)vetor;//o ponteiro recebe a primeiro posição do vetor
	for(;ponteiro<vetor+tamanhodovetor;ponteiro++)

	{
		printf(" %p : %X\n",ponteiro,*ponteiro);
		if(*ponteiro==255)
		contagem++;
	}
	printf("\nO numero de 1s e: %d \n",contagem);
	return 0;
}
