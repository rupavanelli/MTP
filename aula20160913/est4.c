#include<stdio.h>
#define CONVERSAO
struct RGB
{
	float red;
    float blue;
	float green;
};
struct  YCbCr
{
	float y;
	float cb;
	float cr;
};
#define RECEBEVALOR(RGB)\
({ printf("Escreva o valor para RED: ");\
 	scanf("%f",&RGB.red); \
 	printf("Escreva o valor para GREEN: ");\
 	scanf("%f",&RGB.green);\
 	printf("Escreva o valor para BLUE: ");\
	scanf("%f",&RGB.blue);})
	
#define CONVERSAO(RGB,YCbCr)\
( { YCbCr.y = 0.299*RGB.red+0.587*RGB.green+0.114*RGB.blue ;\
    YCbCr.cb = -0.168736*RGB.red-0.331264*RGB.green+0.5*RGB.blue;\
    YCbCr.cr = 0.5*RGB.red+0.418688*RGB.green-0.081312*RGB.blue; })
	int main()
 {
 	struct RGB RGB;
 	struct  YCbCr YCbCr;
    RECEBEVALOR(RGB);
    RGB.red=(RGB.red/255);
    RGB.blue=(RGB.blue/255);
    RGB.green=(RGB.green/255);
    CONVERSAO(RGB,YCbCr);
    printf(" A conversao originou os seguintes valores: %f , %f e %f \n",YCbCr.y,YCbCr.cb,YCbCr.cr);
    return 0;
}
    
 	
