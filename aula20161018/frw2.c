#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define NCHAR 256
float preencher(float *dados, int ndados,char * nomearquivo);
float * RecuperaArquivo (char * nomearquivo);
int ndados=0;
int main()
{
    float *vet= NULL;
    int opcao,dados,i=0;
    printf(">> 1 - Novo Arquivo \n >> 2 - Acrescentar Novo Arquivo \n >> 3 - Ler Arquivo \n\n ");
    scanf("%d",&opcao);
    switch(opcao)
    {
    case 1:
        srand(time(0));
        char nomearquivo[NCHAR];
        float *dados;
        printf("Digite o numero de dados ");
        fscanf(stdin,"%d",&ndados); getchar();
        dados=(float*)malloc(ndados*sizeof(float));
        printf("Digite o nome do arquivo  que deseja salvar o programa: ");
        scanf("%s",nomearquivo);
        fgets(nomearquivo,NCHAR,stdin);
        preencher(dados,ndados,nomearquivo);
        free(dados);
        break;
    case 2:
        printf("Digite o nome do arquivo que contem os dados: ");
        scanf("%s",nomearquivo);
        vet=RecuperaArquivo(nomearquivo);
        for(i=0;i<ndados;i++)
        printf("Dado %d = %f" , i+1,vet[i]);
        free(vet);
        return 0;
        break;
    }
}
float preencher(float *dados, int ndados,char * nomearquivo)
 {
    FILE * arquivo;
    int i;
    sprintf(nomearquivo, "%s.txt", nomearquivo);
    arquivo=fopen(nomearquivo,"w");
    if(arquivo == NULL) fprintf(stderr,"Nao deu certo!");
    for(i=0;i<ndados;i++)
    {
        dados[i]=(float)rand()/RAND_MAX;
        fprintf(arquivo,"%f\n",dados[i]);
    }
    fclose(arquivo);

 }
float * RecuperaArquivo (char * nomearquivo)
{
    float *vet= NULL;
    FILE*arquivo;
    arquivo=fopen(nomearquivo,"r");
    if(arquivo==NULL)
        fprintf(stderr,"Arquivo não existente! \n");
    else
    {
        while(!feof(arquivo))
        {

            ndados++;
            if(vet==NULL)
                    vet=(float *)malloc(sizeof(float));
            else
                vet=realloc(vet,ndados*sizeof(float));
            fscanf(arquivo,"%f",&vet[ndados-1]);
        }
    }

    return vet;
}
