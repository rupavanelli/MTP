#include<stdio.h>
#include<ctype.h>
#include<string.h>
void soletras(char *frase,int n, char *nova_frase);
int main()
{
	char frase[256];
	char nova_frase[256];
	printf("Digite uma frase: ");
	gets(frase);
	soletras(frase,strlen(frase),nova_frase);//o nome do vetor base é o endereço
	printf("%s",nova_frase);
	return 0;
	
	
}
void soletras(char *frase,int n, char *nova_frase){
	int i,j=0;
	for(i=0;i<n;i++)
	
		if(isalpha(frase[i]))//confirma se o caractere é alfanumérico
		{
		
			nova_frase[j]=frase[i];
			j++;
	    }
	
	nova_frase[j]='\0';	
}

