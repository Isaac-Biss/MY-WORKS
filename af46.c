#include<stdio.h>
#include<math.h>

int convert(long long int n)
{
	int j, k=0, i=0;
	while(n!=0)
	{
		j=n%10;
		n/=10;
		k+=j*pow(2,i);
		i++;
	}
}

int main()
{
	long long int n;
	printf("Input the binary number: ");
	scanf("%lld",&n);
	
	printf("The Binary number: %lld\n",n);
	printf("The equivalent Decimal Number is: %d",convert(n));
	
	return 0;
}
