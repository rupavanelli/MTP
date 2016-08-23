#include<stdio.h>
int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d",&valor);
    if(valor%2==0)
    {
        printf("\n %d e par\n",valor);
    }
    else {
        printf("\n %d e impar\n", valor);
    }
    if(valor%3==0)
        {
        printf("\n %d e multiplo de 3\n", valor);
    }
    if(valor%5==0)
    {
        printf("\n %d e multiplo de 5\n", valor);
    }
    if(valor%7==0)
    {
        printf("\n %d e multiplo de 7\n",valor);
    }
    return 0;
}
