#include<stdio.h>
int main()
{
	long long int i=1, j, k=0, p=1, m, n, q;
	
	printf("Input a binary number: ");
	scanf("%lld",&n);
	n=q;
	
	for(j=q;j>0;j/10)
	{
		m=j%10;
		if(i==1)
		{
			p=p*1;
		}
		else
		{
			p=p*2;
		}
		
		k=k+(m*p);
		i++;
	}
	
	
	printf("The Binary Number: %lld\n",q);
	printf("The equivalent Decimal Number: %lld",k);
	return 0;
}
