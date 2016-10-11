#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * recebetexto(char * texto);
char * inicializaTexto();
int main()
{
    char*texto;
    texto=inicializaTexto();
    printf("::::::Entre com seu texto ( entre com '   #' + ENTER para sair) :::::::\n");
    texto=recebetexto(texto);
    printf("\n::: O que tem na HEAP ::::: \n");
    printf("%s", texto);
    free(texto);
    return 0;

}

char * inicializaTexto()
{
    char*texto;
    texto=(char*)malloc(sizeof(char));
    texto[0]='\0';
    return texto;
}
char recebetexto(char * texto)//pegando todo e qualquer caratere que estou digitando, estou salvando todo o texto e ao mesmo tempo aumentando o tamanho do espaço alocado."inflando" de maneira controlada
{
	int c,tamanho=0;
	do{
		c=getchar();
		if(c!='!')
		{   tamanho++;
			texto=(*char) realloc (texto,(tamanho+1)*sizeof(char));//já considerando o \0
			texto[tamanho]='\0';//o ultimo caractere deve ser o '\0
			texto[tamanho-1]=c;//penultimo caractere, tem que ser enfiado antes do \0
		}

	} while (c!='!');//código ascii do esc
	return texto;
}
