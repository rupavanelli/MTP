#include<stdio.h>
int main()
{
	int numero,i,fatorial=1;
	printf("Fatorial de: ");
	scanf("%d",&numero);
	for(i=2;i<=numero;i++)
	{
	
	fatorial=fatorial*i;
}
    printf("\n O fatorial de %d e %d\n",numero,fatorial);

	return 0;
}
