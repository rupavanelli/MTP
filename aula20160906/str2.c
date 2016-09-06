#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0;
	char investigador;
	char string[200];
	char string2[200];
	printf("Digite uma string: ");
	fgets(string,200,stdin);
	string[i]=investigador;
	for(i=0;string[i]!='\0';i++){
		if(string[i]=isalpha(string[i]))
		{
		
		string2[i]=string[i];
	}
		if(string[i]==" ")
		string2[i]=string[i+1];
	}
	printf(" A senha e %s\n",string2);
	return 0;
}
