#include<stdio.h>//entrada e saída padrão que possui as entradas e saídas necessárias
#define NCHAR 256
void receberDados();
void recuperarDados();
int main()
{
    int opcao;
    do{
    printf(" 1 - Receber dados: \n");
    printf("2 - Recuperar dados: \n");
    printf("0 - Sair \n");
    printf("Entre com a opcao: ");
    fscanf(stdin,"%d",&opcao);//mesma coisa que usar snanf, deixa explícito de onde pega a informação
    getchar();
    if(opcao==1)
        receberDados();
    if(opcao==2)
        recuperarDados();
    }while(opcao);
    return 0;
}

void receberDados()
{
    FILE*arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("Entre com seu nome : ");
    fgets(nome,NCHAR,stdin);
    printf("Entre com sua idade : ");
    fscanf(stdin,"%d",&idade);
    printf("Entre com sua altura : ");
    fscanf(stdin,"%f",&altura);
    arquivo=fopen("info.txt","w");
    fprintf(arquivo,"%s\n%d\n,%f\n", nome,idade,altura);
}

void recuperarDados()
{
    FILE*arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    arquivo=fopen("info.txt","r");
    if(arquivo==NULL)
        fprintf(stderr,"Arquivo não existente! \n");
    else{
    fscanf(arquivo,"%s\n%d\n,%f\n", nome,&idade,&altura);//como é leitura é preciso mandar os endereços
    fclose(arquivo);
    fprintf(stdout,"Nome: %s\n",nome);
    fprintf(stdout,"Idade: %d\n",idade);
    fprintf(stdout,"Altura: %f\n",altura);
    }
}


