#include<stdio.h>
#include<math.h>
int main()
{
	long long int  n;
	int  p=0, k=0, i=0, j=0;
	
	printf("Input the binary number: ");
	scanf("%lld",n);
	
	while(n)
	{
		p=n%10;
		j=j+p*pow(2,i);
		n=n/10;
		i++;
	}
	i=1;
	p=0;
	while(j)
	{
		p=j%8;
		k+k+p*i;
		j=j/8;
		i=i*10;
	}
	
	printf("The binary number: %lld",n);
	printf("The equivalent Octal number: %d",k);
	
	return 0;
}
