#include<stdio.h>
#include<stdlib.h>
float maior(float *valor, int tamanho);
float menor(float *valor, int  tamanho);
float * recebevalor(float *valor,int * tamanho);
float media(float *valor, int tamanho);

int main()
{
    int i=0;
    float *valor = NULL;
    int tamanho=0,controle=1;
    while(controle!=0)
    {
    printf("Digite 0 para parar e 1 para continuar \n");
    scanf("%d",&controle);
    if(controle==0)
        break;
    else
        valor=recebevalor(valor,&tamanho);//endereco onde esta armazenada
    }
    printf("O maior e o menor valor respectivamente sao: %f e %f", maior(valor,tamanho),menor(valor,tamanho));
    printf("\nA media e %f",media(valor,tamanho));
    free(valor);
    return 0;
}

float * recebevalor(float *valor,int * tamanho)
{
    if(valor == NULL)//garantir que nao existe meoria sendo usada
        valor=(float*)malloc(sizeof(float));
    else
        valor=(float*)realloc(valor,(*tamanho+1)*sizeof(float));//caso a mamoria já esteja sendo usada, realoca mais um espaço
    (*tamanho)++;
    printf("Digite o valor [%d] : ",*tamanho);
    scanf("%f",&valor[*tamanho-1]);//como o tamanho foi incrementado, a posição que o valor ocupará ter[a que ser tamanho -1
    return valor;


}
float media(float *valor, int tamanho)
{
    float soma=0;
    int i=0;
    for(i=0;i<tamanho;i++)
    {
        soma=soma+valor[i];
    }
    return (soma/(tamanho));
}
float maior(float *valor, int tamanho)
{
    float aux=0;
    int i=0;
    int j=0;
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++)
        {

        if(valor[i]<=valor[j])
        {
          aux=valor[i];
          valor[i]=valor[j];
          valor[j]=aux;
        }
    }
        }
        return aux;
}
float menor(float *valor, int tamanho)
{
    int i=0;
    int j=0;
    float aux=0;
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++)
        {

        if(valor[i]>=valor[j])
        {
          aux=valor[i];
          valor[i]=valor[j];
          valor[j]=aux;
        }
    }
        }
        return aux;
}
