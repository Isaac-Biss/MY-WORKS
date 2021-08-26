
#include<stdio.h>
int main()
{
	int i, j ,k ,n ,sum=0;
	
	printf("enter the limit: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			sum=sum+1;
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}

