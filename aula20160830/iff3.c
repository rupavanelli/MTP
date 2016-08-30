#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main()
{
	unsigned int n;
	int i;
	float sf = 0.0f;
	double sd = 0.0;
	printf("Digite um valor: ");
	scanf("%u",&n);
	//n=1/n;
	for(i=0;i<729;i++) {
		sf += 1.f/n;
		sd += 1.0/n;
	}
	printf("\n A soma e %f.15 para float e %lf.15 para double", sf,sd);
	return 0;
}
