#include<stdio.h>
int main()
{
	int i, j, k, n;
	
	printf("Enter the number of Rows :");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	/*	for(i=n;i>1;i--)
	{
		for(k=n-i;k>0;k++)
		{
			printf(" ");
		}
		for(j=i;j>0;j--)
		{
			printf("* ");
		}
		printf("\n");*/
	return 0;
}
