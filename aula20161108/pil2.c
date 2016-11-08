#include<stdio.h> //Pilha de char//
#include<stdlib.h>
typedef struct Pilha_{
    int idtopo;
    int *dado;
} Pilha;
void push(Pilha*pilha,int  dado);
void pop(Pilha*pilha);
int top(Pilha pilha);
int empty(Pilha pilha);
int main()
{
    Pilha pilha;
    int i=0;
    pilha.idtopo=-1;//padrão
    pilha.dado=NULL;
    for(i;i<5;i++)
    {
        printf("%c ",'A'+i);
        push(&pilha,'A'+i);//colocando a sequencia do alfabeto
    }
    printf("\n");
    while(!empty(pilha))
    {
        printf("%d ",top(pilha));
        pop(&pilha);
    }

    return 0;
}

void push(Pilha*pilha,int dado)
{
    (*pilha).idtopo++;
    if((*pilha).dado==NULL)
        (*pilha).dado=(int*)malloc(sizeof(int));
    else
        do
            (*pilha).dado=(int*)realloc((*pilha).dado,(*pilha).idtopo*sizeof(int));
    while(!(*pilha).dado);
    (*pilha).dado[(*pilha).idtopo]=dado;
}

void pop(Pilha*pilha)
{
    if((*pilha).idtopo + -1 >= -1)
    {
        (*pilha).idtopo--;//empurrando um dado para a pilha

            if((*pilha).idtopo==-1)
        (*pilha).idtopo=NULL;
            else
        (*pilha).dado=(*int)realloc((*pilha).idtopo*sizeof(int));
    }
}


int top(Pilha pilha)
{
    return pilha.dado[pilha.idtopo];
}


int empty(Pilha pilha)//apenas a consulta por isso não é necessário passar por referência
{
    return(pilha.idtopo== -1);
}

