#include<stdio.h>
#include<float.h>
#include<stdlib.h>
int main() {
	srand(time(0));
	int i;
	for(i=0;i<10;i++)
	printf("%f\n",(float)rand()/RAND_MAX);
	return 0;
}
