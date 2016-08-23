#include<stdio.h>
int main()
{
	int numero,i,teste=0;
	printf("Digite um numero e sabera se e primo: ");
	scanf("%d",&numero);
	for(i=2;i<numero;i++)
	{
		if(numero%i==0){
			printf("Nao e primo!\n");
            break;	
    }
}
    if(i==numero) 
    printf("Primo!!!\n");
	return 0;
}
