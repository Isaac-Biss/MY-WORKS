#include<stdio.h>
int main()
{
	int i, j, k, n, m;
	
	printf ("Input the range: ");
	scanf("%d%d",&n,&m);

	while(n<m)
	{
		k=0;
		
		if(n<=1)
		{
			n++;
			continue;
		}
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
				printf("%d ",n);	
		}
		n++;
				
	}
	
	

	return 0;
}
