#include<stdio.h>
#include<math.h>
//int checkprime(int n);

int main()
{
	int i, j, n, p, m, k=0;
	
	printf("Input a positive integer: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		p=i;
		m=n-i;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==1)
			{
				k++;
				break;
			}	
			
		}
		if(k==0)
		{
			for(j=2;j<=(n-i)/2;j++)
			{
				if((n-i)%j==0)
			{
				k++;
				break;
			}	
			}
			if(k=0)
			printf("%d =%d+%d\n",n,i,n-i);
		}
		k=0;
	}
	return 0;
}
/*int checkprime(int n)
{
	int i, p=1;
	if(n==0||n==1)
	{
		p=0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				p=0;
				break;
			}
		}
	}
	return p;
}
*/


