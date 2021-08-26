#include<stdio.h>
int main()
{
	int i, n;
	char j[30];
	
	printf("Input a string to reverse: ");
	gets(j);
	n=strlen(j);
	printf("\nReversed string is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",j[i]);
	}
}
