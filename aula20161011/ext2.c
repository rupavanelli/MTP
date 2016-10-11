#include<stdio.h>
#include<stdlib.h>
struct produto
{
    char nome[32];
    char código[12];
    float preco;

};
struct vendas
{
    int produtos;
    int quantidades;

};

int main()
{
    int opcao;
    printf(">> 1- Ver todos -- \n >> 2 - Incluir \n >> 3 - Excluir \n");
    scanf("%d",&opcao);

}
