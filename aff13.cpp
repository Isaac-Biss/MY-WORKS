#include<stdio.h>
int main()
{
	int i, j ,k ,n;
	
	printf("enter the limit: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j>=n-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
