#include<stdio.h>
int main()
{
	int i, j, n, k;
	
	printf("Enter the rows:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=(n-i)-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
