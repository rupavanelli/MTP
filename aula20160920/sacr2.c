#include<stdio.h>
#include<time.h>
int jogodedados ();
int main()
{
	int i=0;
	srand(time(0));
			for(i=0;i<3;i++)
			{
				if(jogodedados()<21)
					printf("\nVoce perdeu!\n");
				else
				{
				
					printf("\nVoce ganhou!\n");
					break;
				}
			}
	return 0;
}
int jogodedados ()
{
	int j,soma=0;
	int face;
		for(j=0;j<5;j++)
		{
			face=dado();
			printf("%d ",face);
		soma=soma+face;
		
 		}
	return soma;
}
int dado()
{
	return (rand()%6+1);
}
