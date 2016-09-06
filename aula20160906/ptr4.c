#include<stdio.h>
int main()
{
	int n1,n2;
	unsigned char *ponteiro1= NULL;
	unsigned char *ponteiro2=NULL;
	float soma=0;
	printf("Digite dois numeros reais: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	ponteiro1=(unsigned char*)n1;
	ponteiro2=(unsigned char*)n2;
	printf("O valor e a posicao de n1 sao: %p e %X\n",ponteiro1,&ponteiro1);	
	printf("O valor e a posicao de n2 sao: %p e %X\n",ponteiro2,&ponteiro2);
	printf("A soma dos dois numeros e: %f\n",soma);
	return 0;
}
