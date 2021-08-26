#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
