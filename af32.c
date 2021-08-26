#include<stdio.h>
int main()
{
	int i, j, k=0, n;
	
	printf ("Input the number: ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n % i==0)
		{
			k=1;
			break;
		}
	}	
		if(k==0)
		{
			printf("%d is a prime number",n);
		}	
		else
		{
			printf("%d is not a prime number",n);	
		}	


	return 0;
}
