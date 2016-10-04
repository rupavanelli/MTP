#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char * texto = malloc(sizeof(char));//como não sei o tamanho do texto, é preciso usar malloc. tem apenas um caractere reservado na memória
	texto[0]='\0';
	printf("Entre com um texto:\n");
	recebetexto(texto);//toda vez que recebe um caractere anexa na variavel texto
	printf("\n%s",texto);
	return 0;
	
}

recebetexto(char * texto)//pegando todo e qualquer caratere que estou digitando, estou salvando todo o texto e ao mesmo tempo aumentando o tamanho do espaço alocado."inflando" de maneira controlada
{
	int c=0,tamanho=strlen(texto);
	do{
		c=getchar();
		if(c!='#')
		{
			texto[tamanho]=c;
			tamanho++;
			aux=realloc(texto,(tamanho+1)*sizeof(char));//aumentar o tamanho do espaço reservado na memória, já considerando o \0.
			strcpy(aux,texto);
			texto[tamanho]='\0';
			texto=aux;
		}
		
	} while (c!='#');//código ascii do esc
}
