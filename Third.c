//To input a matrix of dimension mXn and find its transpose
#include<stdio.h>
int main()
{
	int a[20][20],i,j,m,n,t;
	printf("Input number of rows and columns in the matrix\n");
	scanf("%d %d",&m,&n);
	printf("Input elements of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0+i;j<m||j<n;j++)
		{
			if(i!=j)
			{
				t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
			}
		}
	}
	printf("Transpose of matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
