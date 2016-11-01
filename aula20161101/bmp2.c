#include<stdio.h>
#include<math.h>
struct Pixel
{
    unsigned char R;//para armazenar apenas um byte em cada variável da struct
    unsigned char G;
    unsigned char B;
};

int main()
{
    struct Pixel pixel,pixel2;
    int PAL,lap,BPP,WPX,i,offset;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    FILE*imagem, *imagem2;
    imagem=fopen("sapo.bmp","r");
    imagem2=fopen("novosapo.bmp","w");
    fseek(imagem,10,SEEK_SET); //OFFSET
    fread(&dword,sizeof(dword),1,imagem);
    printf("Offset: %u\n",dword);
    offset=dword;
    fseek(imagem,18,SEEK_SET);
    fread(&dword,sizeof(dword),1,imagem);
    WPX=dword;
    printf("WPX: %u\n",WPX);
    fseek(imagem,28,SEEK_SET);
    fread(&word,sizeof(word),1,imagem);
    BPP=word;
    printf("BPP: %u\n",BPP);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("tamanho da linha da array de pixels(bytes): %u\n",PAL);
    for(i=0;i<offset;i++)
    {
        fread(&byte,sizeof(byte),1,imagem);
        fwrite(&byte,sizeof(byte),1,imagem2);
    }
    lap=0;
    while(!feof(imagem))
    {
        //leia a informação do pixel(canais R,G e B)
        if(fread(&pixel,sizeof(pixel),1,imagem))
        {
            pixel2.R=pixel.G;
            pixel2.G=pixel.R;
            pixel2.B=pixel.B;
            fwrite(&pixel2,sizeof(pixel2),1,imagem2);


        }
        lap = lap + 3;
        if((lap + 3) > PAL)
        {
            fseek(imagem,(PAL - lap),SEEK_CUR);
            lap=0;
        }
    }
    fclose(imagem);
    fclose(imagem2);
    return 0;
}
