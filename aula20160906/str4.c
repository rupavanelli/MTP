#include<stdio.h>
int main()
{
	int i=0;
	char frase[256];
	printf("Digite uma string para ser codificada: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
	{
	
	if(frase[i]>=65 && frase[i]<=77)
	frase[i]=frase[i]+13;
	if(frase[i]>=78 && frase[i]<=90)
	frase[i]=frase[i]-13;
	if(frase[i]>=97 && frase[i]<=109)
	frase[i]=frase[i]+13;
	if(frase[i]>=110 && frase[i]<=122)
	frase[i]=frase[i]-13;
	}
	printf("\n A nova frase codificada e: %s",frase);
	return 0;
}
