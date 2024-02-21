#include<stdio.h>
int main()
{
	int m,n,a[25][25],i,j,k,t,c=1,choice;
	printf("Input number of rows and columns\n");
	scanf("%d%d",&m,&n);
	printf("Input choice");
	printf("1.Across principal diagonal");
	printf("Horizontally");
	printf("1.Vertically");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			if(m!=n)
			printf("Not possible");
			else
			{
				printf("Input matrix\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				k=m-1;
				for(i=0;i<m-1;i++)
				{
					for(j=0;j<n-1;j++)
					{
						if(i+j<=m/2)
						{
							t=a[i][j];
							a[i][j]=a[i+k][k+j];
							a[i+k][j+k]=t;
						}
						k--;
					}
					k=m-1-c;
					c++;
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
			}
			break;
			}
			case 2:
			{
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				for(i=0;i<m/2;i++)
				{
					for(j=0;j<n;j++)
					{
						t=a[i][j];
						a[i][j]=a[n-1-i][j];
						a[n-1-i][j]=t;
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
			break;
			}
			case 3:
			{
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				for(i=0;i<m;i++)
				{
					for(j=0;j<n/2;j++)
					{
						t=a[i][j];
						a[i][j]=a[i][n-1-j];
						a[i][n-1-j]=t;
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
				break;
			}
			default:
			printf("Wrong choice");
			}
		return 0;
}
