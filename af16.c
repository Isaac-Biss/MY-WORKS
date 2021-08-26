#include<stdio.h>
int main()
{
	int i, sum=0, n, even=0;
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
		printf("The Even numbers are :");
		
	for(i=0;i<n;i++)
	{
		 even=even+2;
		printf(" %d ",even);
		sum =sum+even;
	}
	printf("\nThe Sum of the even Natural Numbers upto %d terms : %d",n,sum);
	
	return 0;
}
