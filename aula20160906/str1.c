#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char frase[256];
	printf("Digite uma frase: ");
	gets(frase);
	for(i=0;frase[i]!=NULL;i++)
	{
		frase[i]=toupper(frase[i]);
	}
	printf("Tamanho: %u\n",strlen(frase));
	if(strcmp(frase,"BOM DIA")==0)
	printf("Bom dia para você tambem!\n");
	else
	printf("\n Voce quer dizer: %s\n",frase);
	return 0;
}
