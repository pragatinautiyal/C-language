#include<stdio.h>
int main()
{
	int a[10],i,t,n,k;
	printf("Input number of elements in array\n");
	scanf("%d",&n);
	printf("Input elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Input k\n");
	scanf("%d",&k);
	i=(k<0?0:n-1);
	if(k>0)
	{
		while(k!=0)
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
			i--;
			if(i==0)
			{
				k--;
				i=n-1;
			}
		}
	}
	else
	{
		while(k!=0)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			i++;
			if(i==n-1)
			{
				k++;
				i=0;
			}
		}
	}
	printf("New array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
