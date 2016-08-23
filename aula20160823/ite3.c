#include<stdio.h>
int main()
{
	int i;
	char nome [256];
	printf("Digite um nome :");
	scanf("%s",&nome);
	for(i=0;nome[i]=!'\0';i++)
	{
		i=i+1;
	}
	
	printf("\n O numero de letras e: %d \n", i);
	return 0;
}
