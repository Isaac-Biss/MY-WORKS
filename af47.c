#include<stdio.h>
int main()
{
	int i, j, k, p, n, sum=0;
	
	printf("Input the number to check whether it is a Strong number: ");
	scanf("%d",&n);
	k=n;
	while(n)
	{
		j=1;
		p=n%10;
		for(i=1;i<=p;i++)
		{
			j=j*i;
		}
		sum=sum+j;
		n=n/10;
		
	}
	if(sum==k)
	{
		printf("%d is a strong number.",k);
	}
	else
	{
		printf("%d is not a strong number.",k);	
	}
	
	return 0;
}
