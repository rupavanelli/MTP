#include<stdio.h>
int primo(int n);
int main()
{
	  int n,i;
	  printf("Digite um numero: ");
	  scanf("%d",&n);
	  for(i=2;i<=n/2;i++)
	  {
	  	if(primo(i) && primo(n-i))
	  		printf("Soma: %d + %d\n", i, n-i);
	  }
	  return 0;	
	  
	  
}
int primo(int n)
{
	int i=0,c=1;//c como um verificador para saber se o numero é primo ou não
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		c=0;
		break;
	}
	
	return c;
}
