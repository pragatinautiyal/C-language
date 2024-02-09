//Input a 2-D array of dimension mXn and arrange all the elements of column in desecending order
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<m||j<n;j++)
		{
			for(k=0+j;k<m-1;k++)
			{
				if(a[j][i]<a[k+1][i])
				{
					t=a[j][i];
					a[j][i]=a[k+1][i];
					a[k+1][i]=t;
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


