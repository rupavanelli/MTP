#include<stdio.h>
#include<stdlib.h>
struct Ponto{
    int x;
    int y;

};

int main()
{
    float *vet= NULL;
    int i=0;
    char nomearquivo[256];
    printf("Digite o nome do arquivo que contem os dados: ")
    scanf("%s",nomearquivo);
    RecuperaArquivo(nomearquivo);
    for(i=0;i<ndados;i++)
    {
        printf("Os pontos sao: %d, %d",vet[i].x,vet[i].y);
    }
    free(vet);
    return 0;
}

struct Ponto * RecuperaArquivo (char * nomearquivo)
{
    struct Ponto *vet= NULL;
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
                    vet=(float *)malloc(sizeof(struct Ponto));
            else
                vet=realloc(vet,ndados*sizeof(struct Ponto));
            fread (vet, sizeof(struct Ponto),ndados, arquivo);
        }
    }

    return vet;
}

