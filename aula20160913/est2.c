#include<stdio.h>
#include<math.h>
#define SOMA(ptA,ptB,soma)\
({ soma.x=ptA.x+ptB.x; \
   soma.y=ptA.y+ptB.y;})
   
#define DISTANCIA(ptA,ptB,d)\
({d=sqrt(pow(ptA.x-ptB.x,2)+(ptA.y-ptB.y,2)+(ptA.z-ptB.z,2));})

#define MOSTRAPONTO(ponto)\
({ printf("( %g; %g ) \n",ponto.x,ponto.y);})

#define RECEBEPONTO(c,ponto)\
  ({  printf("Digite a coordenada x de %c : ",c);\
	scanf("%f",&ponto.x);\
	printf("Digite a coordenada y de %c : ",c);\
	scanf("%f",&ponto.y); \
	printf("Digite a coordenada z de %c : ",c);\
    scanf("%f",&ponto.z);})
	
struct ponto 
{
	float x;
	float y;
	float z;
	
};
int main()
{
	float distancia=0;
	struct ponto A,B,S;
	RECEBEPONTO('A',A);
	RECEBEPONTO('B',B);
	SOMA(A,B,S);
	MOSTRAPONTO(S);
	DISTANCIA(A,B,distancia);
	printf("A distancia e: %f \n",distancia);
}
	
