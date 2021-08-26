#include<stdio.h>
int main()
{
	int n, i, sum=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	
	printf("The first %d natural numbers are:\n",n);
	
	for(i=1;i<=n;i++)
	{
		
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\nThe sum of the Natural Numbers upto %d term %d:",n,sum);
	return 0;
}
