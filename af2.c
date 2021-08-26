#include<stdio.h>
int main()
{
	int n, i, sum=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\nThe sum is %d",sum);
	return 0;
}
