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
    if(isalpha(investigador))//testa se é mesmo um caractere
    c++;//diz que é letra
    
    if(isspace(investigador))// test se é um espaço
    c=c;//confirma que não é letra
    
    
    i++;//
    investigador=frase[i];// investigador recebe a próxima letra da frase
}
printf("A frase contem  %d  letras\n",c);
return 0;
}
