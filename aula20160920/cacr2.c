#include <stdio.h>
#include<math.h>
float achardelta(float a,float b, float c);
struct raizes  achar_raizes(float delta,float a,float b);
struct raizes
{
	float raiz1,raiz2;
	float Iraiz1,Iraiz2;
};

int main()
{
	float a,b,c,delta;
	float resultado;
	struct raizes res;
		printf("Digite o coeficiente 1: ");
		scanf("%f",&a);
		printf("Digite o coeficiente 2: ");
		scanf("%f",&b);
		printf("Digite o termo independente: ");
		scanf("%f",&c);
		delta=achardelta(a,b,c);
		res=achar_raizes(delta,b,a);
		if(abs(res.Iraiz1)>1e-12|| abs(res.Iraiz2)>1e-12)
		printf("\n As raizes sao: r1:%f + I* %f e r2:%f  + I* %f\n",res.raiz1,res.Iraiz1,res.raiz2,res.Iraiz2);
		else
		printf("\n As raizes sao: r1:%f e r2:%f \n",res.raiz1,res.raiz2);
		return 0;
		
}
float achardelta(float a, float b, float c)
{
	float delta=0;
	delta=pow(b,2)-4*a*c;
	return delta;
}
struct raizes  achar_raizes(float delta,float b, float a)
{
	struct raizes r;
	r.Iraiz1=0;
	r.Iraiz2=0;
	float raiz1,raiz2;
	if(delta>0){
		 r.raiz1 = (-b + sqrt(delta))/(2*a); 
		 r.raiz2 = (-b - sqrt(delta))/(2*a);}
    if(delta=0)
    	r.raiz1 = r.raiz2 = -b/(2*a);
    if(delta<0){
     	r.raiz1 = r.raiz2 = -b/(2*a);
		r.Iraiz1=  sqrt(-delta)/(2*a); 
		r.Iraiz2= - sqrt(-delta)/(2*a);}
    return r;
	}
