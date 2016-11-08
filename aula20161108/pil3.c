#include<stdio.h>
#define TAMPILHA 1000
typedef struct Pilha_
{
    int idtopo;
    int dado[TAMPILHA];

}Pilha;
void push(Pilha*pilha,int dado);
void pop(Pilha*pilha);
int top(Pilha pilha);
int empty(Pilha pilha);
int main()
{
    int opcao;
    Pilha pilha;
    int dados;
    int i=0;
    pilha.idtopo=-1;//padrão
    printf("Insira os valores que deseja inverter e para parar insira -1: ");
    for(i=0;i<TAMPILHA;i++)
    {
        printf("\nDado %d :",i+1);
        scanf("%d",&dados);
        if(dados==-1)
            break;
        else
        push(&pilha,dados);
    }

    printf("\n >>>> Digite 1 para apresentar e 2 para salvar os dados em um arquivo!\n");
    scanf("%d",&opcao);
    if(opcao==1)
    {
        while(!empty(pilha))
    {
        printf("%d ",top(pilha));
        pop(&pilha);
    }
    }
    else
    {
        FILE * arquivo;
        arquivo=fopen("dados1.txt","w");
        while(!empty(pilha))
    {
        fprintf(arquivo,"%d ",top(pilha));
        pop(&pilha);
    }
        fclose(arquivo);

    }

    return 0;
}
void push(Pilha*pilha,int dado)
{

    if((*pilha).idtopo + 1 <TAMPILHA)
    {
        (*pilha).idtopo++;//empurrando um dado para a pilha
        (*pilha).dado[(*pilha).idtopo]=dado;//coloca o dado no topo
    }
    else fprintf(stderr,"Estouro de Pilha!!\n");
}

void pop(Pilha*pilha)
{
   if((*pilha).idtopo + -1 >= -1)
    {
        (*pilha).idtopo--;//empurrando um dado para a pilha
    }
}
int top(Pilha pilha)//apenas a consulta, por isso não é necessário passar por referência
{
    return pilha.dado[pilha.idtopo];
}


int empty(Pilha pilha)//apenas a consulta por isso não é necessário passar por referência
{
    return(pilha.idtopo== -1);
}
