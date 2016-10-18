#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define NCHAR 256
 float preencher(float *dados, int ndados,char *nome);
int main()
{
    srand(time(0));
    char nomearquivo[NCHAR];
    int ndados;
    float *dados;
    printf("Digite o numero de dados ");
    fscanf(stdin,"%d",&ndados); getchar();
    dados=(float*)malloc(ndados*sizeof(float));
    printf("Digite o nome do arquivo  que deseja salvar o programa: ");
    scanf("%s",nomearquivo);
    //fgets(nomearquivo,NCHAR,stdin);
    preencher(dados,ndados,nomearquivo);
    free(dados);
    return 0;

}
 float preencher(float *dados, int ndados,char * nomearquivo)
 {
    FILE * arquivo;
    int i;
    //sprintf(nomearquivo, "%s.txt", nomearquivo);
    arquivo=fopen(nomearquivo,"w");
    if(arquivo == NULL) fprintf(stderr,"Nao deu certo!");
    for(i=0;i<ndados;i++)
    {
        dados[i]=(float)rand()/RAND_MAX;
        fprintf(arquivo,"%f\n",dados[i]);
    }
    fclose(arquivo);

 }
