#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char frase[256],frasei[256],aux;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;i!='\0';i++)
	{
		aux=frase[i];
		frase[i]=frasei[i];
		frase[i]=aux;
	}
	if(strcmp(frase,frasei)==1)
	{
		printf("\n A frase e um palindromo!\n");
	}
	else
	{
		printf("\n A frase nao e um palindromo!\n");
	}
	return 0;
	
}
