#include<stdio.h>
int main()
{
	long long int i, j ,k ,n ,p ;
	char hexadecimalNumber[100];
	
	printf("Input any Decimal number: ");
	scanf("%d",&n);
	
	k=n;
	while(k!=0)
	{
		p=k%16;
		if(p<10)
		{
			p=p+48;
		}
		else
		{
			p=p+55;
		}
		hexadecimalNumber[i++]=p;
		k=k/16;
	}
	printf("The equivalent Hexadecimal Number: ");
	for(j=i-1;j>0;j--)
	{
		printf("%c",hexadecimalNumber[j]);
	}
	
	
	return 0;
}
