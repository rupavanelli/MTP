#include<stdio.h>
#include<math.h>
#define N 1000
struct Cadastro
{
	char nome[30];
	int idade;
	float telefone;
};

int main()
{
	struct Cadastro aluno[N];
	int n;
	int j=0,i=0;
	int opcao=0;
	do 
	{
	printf("1 para cadastrar e -1 para parar: ");
	scanf("%d",&n);
	fflush(stdin);
    if(n!=-1)
    {
	printf("Digite o nome: ");
	fgets(aluno[i].nome,20,stdin);
	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%d",&aluno[i].idade);
	fflush(stdin);
	printf("Digite o telefone: ");
	scanf("%f",&aluno[i].telefone);
	fflush(stdin);
    i++;
    }
}
	while(n!=-1);
	printf("Digite 1 para listar os nomes, 2 para listar as idades e 3 para listar telefones");
	scanf("%d",&opcao);
	switch(opcao)
	{
	case 1:
		for(j=0;j<i;j++)
		{
		printf("Nome [%d]",j+1);
		printf("%s",aluno[j].nome);
	}
		break;
	case 2: 
	    for(j=0;j<i;j++)
	    {
	    printf("Idade [%d]",j+1);
		printf("%d",aluno[j].idade);
	}
		break;
	case 3: 
	    for(j=0;j<N;j++)
	    {
		printf("Telefone [%d]",j+1);
		printf("%g", aluno[j].telefone);
	}
		break;
	}
	return 0;
}
