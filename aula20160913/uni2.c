#include<stdio.h>
union Uniao {
	int i;
	float f;
	
};
int main()
{
	union Uniao numero;
	char tipo;
	do{
	printf("Digite i(inteiro) ou f(float) para escolher o tipo de dado:");
	scanf("%c",&tipo);
}
	while(tipo !='i' && tipo!= 'I' && tipo!='f' && tipo!='F');
	if(tipo=='i' || tipo== 'I')
	{
		printf("Entre com o int: ");
		scanf("%d",&numero.i);
		printf("Como float %e\n", numero.f);
	}
	else
	{
	    printf("Entre com o float: ");
		scanf("%d",&numero.f);
		printf("Como int %d\n",numero.i);
	
	}
	return 0;
	
}

