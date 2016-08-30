#include<stdio.h>
#include<stdint.h>
#include<complex.h>

int main()
{
	double complex z1, z2, r_z1, r_z2, i_z1, i_z2,soma;
	printf("Real de z1: ");
	scanf("%lf",&r_z1);
	printf("imaginario de z1: ");
	scanf("%lf",&i_z1);
	printf("Real de z2: ");
	scanf("%lf",&r_z2);
	printf("Imaginario de z1: ");
	scanf("%lf",&i_z2);
	z1=r_z1+i_z2*I;
	z2=r_z2+i_z2*I;
	soma=z1+z2;
	printf("\n A soma e %lf + %lf*I\n",creal(soma),cimag(soma));
	printf("\n A soma e %lf + %lf*I\n",cabs(soma),carg(soma));
	return 0;
}
	
