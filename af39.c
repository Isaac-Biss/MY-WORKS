#include<stdio.h>
int main()
{
	int i, j=0, k, n;
	
	printf("Enter the minimum: ");
	scanf("%d",&n);
	
	printf("Enter the maximum: ");
	scanf("%d",&k);
	
	printf("Numbers between %d and %d, divisible by 9: ",n,k);
	
	for(i=n;i<k;i++)
	{
		if(i%9==0)
		{
			printf("%d ",i);
			j=j+i;
		}
	}
		printf("\nThe sum: %d ",j);
	return 0;
}
