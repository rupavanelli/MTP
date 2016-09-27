#include<stdio.h>
int divisao(int dividendo, int divisor, int * pquociente, int * presto);
int main()
{
	int dividendo, quociente=0;
	int divisor, resto=0;
	printf("Entre com o  dividendo: ");
	scanf("%d",&dividendo);
	printf("Entre com o divisor: ");
	scanf("%d",&divisor);
	if(divisao(dividendo, divisor, &quociente, &resto))//é preciso mandar o endereços de variáveis dentro do main, opera no conteúdo dos endereços e atualiza automaticamente os valores
	printf("Quociente: %d Resto: %d\n",quociente,resto);
	else
	printf("* ERRO ! \n");
	
	return 0;
}

int divisao(int dividendo, int divisor, int * pquociente, int * presto)
{
	if(divisor!=0){
		*pquociente=dividendo/divisor;//o wuociente recebe dividendo/divisor
		*presto=dividendo%divisor;//o resto recebe o dividendo%divisor
		return 1;
	}
	else
	return 0;

}
