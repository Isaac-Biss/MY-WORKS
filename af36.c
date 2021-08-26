#include<stdio.h>
int main()
{
	int i, j, k, n;
	
	printf("Enter the rows: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	return 0;
}
