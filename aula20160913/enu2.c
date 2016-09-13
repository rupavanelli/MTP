#include<stdio.h>
 enum meses_do_ano
{
Janeiro = 1, Fevereiro=2, Marco=3, Abril=4, Maio=5, Junho=6,
     Julho=7, Agosto=8, Setembro=9, Outubro=10, Novembro=11, Dezembro=12}mes;
 
int main()
{

	printf("Digite o mes de nascimento (em numero): ");
	scanf("%d",&mes);
	switch(mes)
	{
	case Janeiro:
		printf("%d - Janeiro",mes);
	break;
	case Fevereiro:
		printf("%d - Fevereiro", mes);
	break;
		case Marco:
		printf("%d - Março",mes);
	break;	
	case Abril:
		printf("%d - Abril",mes);
	break;
		case Maio:
		printf("%d - Maio",mes);
	break;
		case Junho:
		printf("%d - Junho",mes);
	break;
		case Julho:
		printf("%d - Julho",mes);
	break;
		case Agosto:
		printf("%d - Agosto",mes);
	break;
		case Setembro:
		printf("%d - Setembro",mes);
	break;
		case Outubro:
		printf("%d - Outubro",mes);
	break;
		case Novembro:
		printf("%d - Novembro",mes);
	break;
		case Dezembro:
		printf("%d - Dezembro",mes);
	break;
    }
    return 0;
}
