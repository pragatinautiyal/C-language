//To input a string containing multiple words using scanf and count number of words in the string
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c=0,l;
	char s[20];
	printf("Input string\n");
	scanf("%[^\n]",s);
	l=strlen(s);
	while(i<=l)
	{
		if(s[i]==' ')
		c++;
		i++;
	}
	printf("Number of words are %d",c+1);
	return 0;
}
