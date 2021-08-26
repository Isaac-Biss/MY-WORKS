#include<stdio.h>
int main()
{
	int i, j, k, n, p ,m ,q, sum;
	
	printf("Input starting range of number: ");
	scanf("%d",&n);
	
	printf("Input ending range of number: ");
	scanf("%d",&m);
	printf("The Strong numbers are: ");
	
	for(i=n;i<=m;i++)
	{
		q=i;
		sum=0;
	
		while(q)
		{
			p=1;
			k=q%10;
			
			for(j=1;j<=k;j++)
			{
				p=p*j;
			}
			sum=sum+p;
			q=q/10;
			
		}	
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
