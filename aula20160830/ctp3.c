#include<stdio.h>
#include<ctype.h>
int main ()
{
 int i=0,c=0;// primeiro caracter da string 
 char frase [256];
 char investigador;
 printf("Digite uma frase: ");
 gets(frase);
 investigador=frase[i];
 while(investigador)
{
    if(isalpha(investigador))//testa se � mesmo um caractere
    c++;//diz que � letra
    
    if(isspace(investigador))// test se � um espa�o
    c=c;//confirma que n�o � letra
    
    
    i++;//
    investigador=frase[i];// investigador recebe a pr�xima letra da frase
}
printf("A frase contem  %d  letras\n",c);
return 0;
}
