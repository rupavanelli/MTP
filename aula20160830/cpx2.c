#include<stdio.h>
#include<stdint.h>
#include<complex.h>

int main()
{
	double  complex z,r_z,i_z,conjugado;
	printf("Parte real: ");
	scanf("%lf",&r_z);
	printf("Parte imaginaria: ");
	scanf("%lf",&i_z);
    z=r_z+i_z*I;
	conjugado=(conj (z)*(z));
	printf("\n O novo valor e: %lf + %lf*I\n",creal(conjugado),cimag(conjugado));
	return 0;
		
	
}
