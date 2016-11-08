#include<stdio.h>
#define TAMPILHA 1024//esta pilha pode ser estourada por ter tamanho fixo
typedef struct Pilha_{
    int idtopo;
    int dado[TAMPILHA];//possui no máximo 10 caracteres
} Pilha;
void push(Pilha*pilha,int dado);
void pop(Pilha*pilha);
int top(Pilha pilha);
int empty(Pilha pilha);
void converter(Pilha *pilha,int valor);
void mostrar(Pilha pilha);
int main()
{
    Pilha pilha;
    int i=0,valor;
    pilha.idtopo=-1;//padrão
    printf("Digite um valor inteiro: ");
    scanf("%d",&valor);
    converter(&pilha,valor);
    mostrar(pilha);
    return 0;
}
void converter(Pilha *pilha,int valor)
{
    int BIT;
    int aux;
    aux=valor;
    while(aux>0)
    {
        BIT=aux%2;
        push(pilha,BIT);
        aux=aux/2;
    }

}

void mostrar(Pilha pilha)
{
     while(!empty(pilha))
    {
        printf("%d ",top(pilha));
        pop(&pilha);
    }

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

