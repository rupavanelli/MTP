#include<stdio.h>
#include<ctype.h>
int main ()
{
 int i=0;// primeiro caracter da string 
 char frase [256];
 char investigador;
 printf("Digite uma frase: ");
 gets(frase);
 investigador=frase[i];//recebe o primeiro caractere da frase
 while(investigador)//enquanto a string não for nula
{
    frase[i]=toupper(investigador);//a frase na posição i recebe a letra maiúscula
    i++;//incremento o índice
    investigador=frase[i];//e o investigador recebe a nova letra
}
printf("A nova frase: %s \n",frase);
return 0;
}
