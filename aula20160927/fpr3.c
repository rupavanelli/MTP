#include<stdio.h>
int iguais(int *A, int *B, int n, int m,int *C);
int main()
{
	int C[20];
	int j=0,p=0;
	int A[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int n=sizeof(A)/sizeof(int);
	int B[]={1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	p=iguais(A,B,n,m,C);
	for(j=0;j<p;j++)
	{
		printf("%d ",C[j]);
	}
	return 0;
}
int iguais(int *A, int *B, int n, int m,int *C)
{
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
	{
		for(k=0;k<m;k++)
		{	
	
		if(A[i]==B[k])
		{
			C[j]=A[i];
			j++;
		}
	}
}
	C[j]='\0';
	return j;
	
}

	
	
