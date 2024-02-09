//Input a 2-D array of dimension mXn and arrange all elements of all rows in ascending order
#include<stdio.h>
int main()
{
	int a[20][20],i,j,k,m,n,t;
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<m||j<n;j++)
		{
			for(k=0+j;k<n-1;k++)
			{
				if(a[i][j]>a[i][k+1])
				{
					t=a[i][j];
					a[i][j]=a[i][k+1];
					a[i][k+1]=t;
				}
			}
		}
	}
	printf("Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	    printf("\n");
	}
	return 0;
}
