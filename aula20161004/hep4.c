#include<stdio.h>
struct Dado
{
	char nome[32];
	int idade;
};
int main()
{
	int ,opcao,dados,ndados;
    dados=malloc(ndados*sizeof(int));
	printf("Digite o numero de dados que deseja digitar: ");
	scanf("%d",&ndados);
	dados=malloc(ndados*sizeof(int));
	preencher(dados,ndados);
	printf("Para Ver Todos, digite 1.\n Para Incluir, digite 2 \n Para Excluir digite 3;")
	printf("Digite a opcao que deseja acessar: ")
	scanf("%d",opcao)
	switch(opcao);
}
void preencher(float *dados , int ndados)
{
	for(i=0;i<dados;i++)
	{
		printf("Cadastrando candidato %d",i+1);
		printf("Digite o nome: ");
		fgets(dados.nome,32,stdin);
		printf("Digite a idade: ");
		scanf("%d",dados.idade);
		
	}
}
void ver_todos(float * dados, int ndados)
{
	int i=0;
	for(i=0;i<ndados;i++)
	{
		printf("Candidado: %s\n",dado.nome);
		printf("Idade: %d\n",dado.idade);
	}
}
void incluir()
{
	
}
void 

