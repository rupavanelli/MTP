#include<stdio.h>
struct divisao_inteira
{
	int quociente;
	int resto;
};
struct divisao_inteira divisao (int dividendo, int divisor);

int main()
{
	struct divisao_inteira resposta;
	int dividendo,divisor;
	printf("Entre com o  dividendo: ");
	scanf("%d",&dividendo);
	printf("Entre com o divisor: ");
	scanf("%d",&divisor);
	resposta=divisao(dividendo,divisor);
	printf("Quociente: %d Resto: %d\n",resposta.quociente, resposta.resto);
	
}
struct divisao_inteira divisao (int dividendo, int divisor)
{
	struct divisao_inteira resposta;
	resposta.quociente=dividendo/divisor;
	resposta.resto=dividendo%divisor;
	return resposta;
	
}
