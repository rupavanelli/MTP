#include<stdio.h>
#include<float.h>
int main() {
	
	if(1.0f>(1.0f-FLT_EPSILON*8.0f))
	printf("\n1 maior que 1-eps\n");
	else
	("\n1 NAO EH maior que 1-eps\n");
	if(1.0>(1.0-DBL_EPSILON*4.0))
		printf("\n1 maior que 1-eps\n");
	else
	("\n1 NAO EH maior que 1-eps\n");
}
