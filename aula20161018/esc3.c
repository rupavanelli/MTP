#include<stdio.h>
#include<stdlib.h>
struct Ponto{
    int x;
    int y;
};
void preencherPontos(int ndados, char *nome);

int main()
{
    int ndados;
    char nome[20];
    printf("Digite o numero de pontos que quer registrar: ");
    fscanf(stdin,"%d",&ndados);
    printf("Digite o nome do documento em que deseja salvar: ");getchar();
    fgets(nome,20,stdin);
    preencherPontos(ndados,nome);
    return 0;
}

void preencherPontos(int ndados, char *nome)
{
    int i=0;
    FILE*arquivo;
    struct Ponto * vet = (struct Ponto *)calloc (ndados, sizeof(struct Ponto));
    arquivo=fopen("pontos.txt","wb");
    for(i=0;i<ndados;i++)
    {
        printf("Entre com a coordenada em x: ");
        fscanf(stdin,"%d",&vet[i].x);
        printf("Entre com a coordenada em y: ");
        fscanf(stdin,"%d",&vet[i].y);

    }
    fwrite (vet, sizeof(struct Ponto), ndados, arquivo);
    fclose(arquivo);


}
