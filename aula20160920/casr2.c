#include<stdio.h>
#include<math.h>
void recebe_dado(char tipo, void *endereco);
int main()
{
	int i;
	float f;
	char c;
	printf("Digite um valor inteiro para elevarmos ao quadrado: ");
	recebe_dado('i',&i);
	printf("Digite um valor do tipo ponto flutuante para tirarmos a raiz: ");
	recebe_dado('f',&f);
	printf("Digite um caractere para deixarmos maiusculo: ");
	recebe_dado('c',&c);
	printf("Os novos valores/letra: %d %f %c",i*i,sqrt(f),(isupper(c))? tolower(c) : toupper(c));
	return 0;
}

void recebe_dado(char tipo, void *endereco)
{
	int c;
	switch (tipo){
	case'i': scanf("%d",(int *)endereco);break;
	case'f': scanf("%f",(float *)endereco);break;
	case 'c': scanf("%c",(char *)endereco);break;
}
	 while((c = getchar()) != EOF && c != '\n');	
}
