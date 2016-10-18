#include<stdio.h>

float * RecuperaArquivo (char * nomearquivo);


int ndados=0;
int main()
{
    float *vet= NULL;
    int i=0;
    char nomearquivo[256];
    printf("Digite o nome do arquivo que contem os dados: ");
    scanf("%s",nomearquivo);
    vet=RecuperaArquivo(nomearquivo);
    for(i=0;i<ndados;i++)
        printf("Dado %d = %f" , i+1,vet[i]);
    free(vet);
    return 0;
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
