#include<stdio.h>
#define TAMPILHA 10000
typedef struct Pilha_
{
    int idtopo;
    float dado[TAMPILHA];//possui no máximo 10 caracteres
} Pilha;

void push(Pilha*pilha,float  dado);
void pop(Pilha*pilha);
float top(Pilha pilha);
int empty(Pilha pilha);
void mostrar(Pilha pilha);
int main()
{
    Pilha pilha;
    FILE * arquivo;
    pilha.idtopo=-1;//padrão
    float num;
    arquivo=fopen("dados.txt","r");//define como leitura
     if(arquivo) {
         fseek(arquivo,0, SEEK_SET);
    do {
      fscanf(arquivo, "%f\n", &num);
      //fprintf(stdout, "%f -- ", num);
      push(&pilha,num);
    } while(!feof(arquivo));
    fclose(arquivo);
    }
     mostrar(pilha);

    return 0;

}
void mostrar(Pilha pilha)
{
     while(!empty(pilha))
    {
        printf("%g ",top(pilha));
        pop(&pilha);
    }
    printf("\n");
}
void push(Pilha*pilha,float dado)
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
float top(Pilha pilha)//apenas a consulta, por isso não é necessário passar por referência
{
    return pilha.dado[pilha.idtopo];
}


int empty(Pilha pilha)//apenas a consulta por isso não é necessário passar por referência
{
    return(pilha.idtopo== -1);
}


