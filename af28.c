#include<stdio.h>
int main()
{
	int i ,j , n, k, p=1, sum;
	
	printf("Input the starting number: ");
	scanf("%d",&n);
	
	printf("Input the ending number: ");
	scanf("%d",&k);
	
	printf("The perfect numbers within the given range: ");
	
	for(i=n;i<=k;i++)
	{
		 sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}	
	}
	return 0;
}
