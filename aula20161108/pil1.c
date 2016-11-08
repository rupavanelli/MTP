#include<stdio.h> //Pilha de char//
#define TAMPILHA 10//esta pilha pode ser estourada por ter tamanho fixo
typedef struct Pilha_{
    int idtopo;
    char dado[TAMPILHA];//possui no máximo 10 caracteres
} Pilha;
void push(Pilha*pilha,char  dado);
void pop(Pilha*pilha);
char*top(Pilha pilha);
int empty(Pilha pilha);
int main()
{
    Pilha pilha;
    int i=0;
    pilha.idtopo=-1;//padrão
    for(i;i<5;i++)
    {
        printf("%c ",'A'+i);
        push(&pilha,'A'+i);//colocando a sequencia do alfabeto
    }
    printf("\n");
    while(!empty(pilha))
    {
        printf("%c ",top(pilha));
        pop(&pilha);
    }

    return 0;
}
void push(Pilha*pilha,char  dado)
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


char*top(Pilha pilha)//apenas a consulta, por isso não é necessário passar por referência
{
    return pilha.dado[pilha.idtopo];
}


int empty(Pilha pilha)//apenas a consulta por isso não é necessário passar por referência
{
    return(pilha.idtopo== -1);
}
//algoritmo também para inverter sequências
