#include<stdio.h>
int main()
{
	int i, j, n, k=0;
	
	printf("Input the number: ");
	scanf("%d",&n);
	i=n;
			
	while(i!=0)
	{
		j=i%10;
		k+=j*j*j;
		i/=10;
	}
	if(k==n)
	{
		printf("%d is an Armstrong number.",n);
	}
	else
	{
		printf("%d is not Armstrong number.",n);	
	}
	return 0;
}
