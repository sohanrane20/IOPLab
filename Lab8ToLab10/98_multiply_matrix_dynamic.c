/*
98. Program to multiply two matrices using pointers through dynamic memory allocation
Author: Sohan
*/
#include<stdio.h>
#include<stdlib.h>
void read_matrix(int *a[], int n);
void print_matrix(int *a[], int n);
int main()
{
	int n, i, j, k;
	printf("Enter order of matrices: ");
	scanf("%d", &n);
	int *a[n], *b[n], *c[n];
	for(i=0; i<n; i++)
	{
		a[i]=(int*)malloc(n*sizeof(int));
		b[i]=(int*)malloc(n*sizeof(int));
		c[i]=(int*)malloc(n*sizeof(int));
	}
	printf("Enter elements of matrix A: ");
	read_matrix(a, n);
	printf("Enter elements of matrix B: ");
	read_matrix(b, n);
	printf("Matrix A=\n");
	print_matrix(a, n);
	printf("Matrix B=\n");
	print_matrix(b, n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			*(*(c+i)+j)=0;
			for(k=0; k<n; k++)
			{
				*(*(c+i)+j)+=*(*(a+i)+k) * *(*(b+k)+j);
			}
		}
	}
	printf("Matrix C=\n");
	print_matrix(c, n);
	for(i=0; i<n; i++)
	{
		free(a[i]);
		free(b[i]);
		free(c[i]);
	}
	return 0;
}
void read_matrix(int *a[], int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", *(a+i)+j);
		}
	}
}
void print_matrix(int *a[], int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d ", *(*(a+i)+j));
		}
		printf("\n");
	}
}
