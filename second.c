#include<stdio.h>
int main()
{
	int a[20][20],i,j,m,n;
	printf("Input number of rows and columns in the matrix\n");
	scanf("%d %d",&m,&n);
	printf("Input elements of matrix\n");
	if(m>=3)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
		for(j=0;j<n;j++)
		a[1][j]=2*a[1][j]-a[0][j]+5*a[2][j];
		printf("Matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
		    printf("\n");
		}
	}
	else
	printf("Operation not valid");
	return 0;
}
