#include<stdio.h>
int main()
{
	int i, j, k=4;
	char c='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2c",c+j-1);	
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%2c",c+j-1);
		}
		printf("\n");
		k--;
	}
	return 0;
}
