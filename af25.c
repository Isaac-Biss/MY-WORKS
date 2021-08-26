#include<stdio.h>
int main()
{
	int i, n, j=0, k;
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
	printf("The Square natural numbers upto 5 terms are : ");
	for(i=1;i<=n;i++)
	{
	   	k=i*i;
		printf("%d ",k);
		j=j+k;
	}
	printf("\nThe Sum of Square Natural Number upto 5 terms= %d",j);
	return 0;
}
