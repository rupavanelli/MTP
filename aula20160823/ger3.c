#include<stdio.h>
int main()
{
	int numero,i,cont=0;
	printf("Digite um valor e sabera se e um numero perfeito: ");
	scanf("%d",&numero);
	for(i=numero-1;i!=0;i--)
	{
	
	    if(numero%i==0)
	     {
	     	cont=cont+i;
	     }
}

   if(numero==cont)
   {
   
   printf("\n %d e perfeito!\n",numero);
}
   return 0;
}
