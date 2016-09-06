#include <stdio.h>
 int main()
 {
 	unsigned int numero=0xFACA8421;//número em hexadecimal
 	unsigned char *ponteiro = NULL;//ponteiro aponta pra "lugar nenhum", sabendo que char é 1byte
 	printf("%p : %u\n", &numero, numero);//computador escolhe um endereço de memória para guardar esse número
 	ponteiro=(unsigned char*)&numero;//carregou o numero para o ponteiro, apontando o lugar
 	for(;ponteiro<&numero+1;ponteiro++)//como numero é int(4bits), acrescentar 1 significa preencher 1 bit(4bytes), ou seja, as 4 casas que armazenavam o número
 	{
 		printf("%p : %X\n",ponteiro,*ponteiro);
 	}
 	return 0;
 }
