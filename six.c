//Input a string and check if it is palindrome of not without using predefined functions
#include<stdio.h>
int main()
{
	int i=0,j,l=0,res=0;
	char s[20];
	printf("Input string");
	fgets(s,20,stdin);
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			res=1;
			break;
		}
	}
	if(res==0)
	printf("Palindrome");
	else
	printf("Not a palindrome");
	return 0;
}
