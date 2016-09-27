#include<stdio.h>
int soma(int *A, int n);
int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int n = sizeof(A)/sizeof(int);
	printf("A soma e: %d",soma(A,n));
	return 0;
}
int soma(int *A,int n)
{
	int i;
	for(i=n;i>=0;i--)
	return(n==0)? 1 : (A[n-1] + soma(A,n-1);
}
