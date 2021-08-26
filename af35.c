#include<stdio.h>
int main()
{
	int i, j=0, k=1, n ,p=0;
	printf("Input number of terms to display: ");
	scanf("%d",&n);
	
	printf("Here is the Fibonacci series upto 10 terms: %d %d ",j,k);
	for(i=3;i<=n;i++)
	{
		p=j+k;
	printf("%d ",p);
		j=k;
		k=p;
	}
		
	
	return 0;
}
