//Input a 2-D array of dimension mXn and arrange all elements of all rows in ascending order
#include<stdio.h>
int main()
{
	int a[20][20],i,m,n,t,k,l;
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
		for(k=0;k<m||k<n;k++)
		{
			for(l=0+k;l<n-1;l++)
			{
				if(a[i][k]>a[i][l+1])
				{
					t=a[i][k];
					a[i][k]=a[i][l+1];
					a[i][l+1]=t;
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


