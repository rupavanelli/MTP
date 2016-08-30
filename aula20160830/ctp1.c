#include<stdio.h>
#include<ctype.h>
int main ()
{
 int i=0;// primeiro caracter da string 
 char frase [256];
 char investigador;
 printf("Digite uma frase: ");
 gets(frase);
 investigador=frase[i];
 while(investigador)
{
    frase[i]=tolower(investigador);
    i++;
    investigador=frase[i];
}
printf("A nova frase: %s \n",frase);
return 0;
}
