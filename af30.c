#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k, n, q, p, sum;
	
	printf("Input starting number of range: ");
	scanf("%d",&n);
	
	printf("Input ending number of range: ");
	scanf("%d",&q);
	
	printf("Armstrong numbers in given range are: ");
	
	for(j=n;j<=q;j++)
	{
		i=j;
		sum=0;
	while(i!=0)
	{
		k=i%10;
		i=i/10;
		sum=sum+(k*k*k);
	}
/*	i=j;
	while(i!=0)
	{
		k=i%10;
		//p+=pow(k,m);
		i/10;
		for(p=1;p<=m;p++)
		{
			a=a*k;
		}
		sum+=a;
		a=1;
	}*/
	
	if(sum==j)
	{
		printf("%d ",j);
	}
	
	}
	return 0;
}
