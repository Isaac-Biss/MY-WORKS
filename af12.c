#include<stdio.h>
int main()
{
	int i, j, n, sum=0;
	
	printf("Enter the height:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+1;
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}
