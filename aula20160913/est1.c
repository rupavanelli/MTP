#include<stdio.h>
#include<math.h>
#define MOSTRAPONTO(ponto)\
({ printf("( %g; %g ) \n",ponto.x,ponto.y);})

#define RECEBEPONTO(c,ponto)\
  ({  printf("Digite a coordenada x de %c : ",c);\
	scanf("%f",&ponto.x);\
	printf("Digite a coordenada y de %c : ",c);\
	scanf("%f",&ponto.y); })

#define SOMA(ptA,ptB,soma) \
   ({soma.x=ptA.x+ptB.x; \
     soma.y=ptA.y+ptB.y;}) 

#define DISTANCIA(ptA,ptB,d) \
({d=(sqrt(pow(ptA.x-ptB.x,2.f)+pow(ptA.y-ptB.y,2.f)));})
struct Ponto
{
	float x;
	float y;
};
int main()
{
	struct Ponto A,B,S;
	float distancia;
	RECEBEPONTO('A',A);
	RECEBEPONTO('B',B);
	SOMA(A,B,S);
	MOSTRAPONTO(S);
	DISTANCIA(A,B,distancia);
	printf("A distancia e: %f \n",distancia);
	return 0;
}
