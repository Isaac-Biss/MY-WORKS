#include<stdio.h>
int main()
{
	int i, m, j=0, k=0, n=1;
	
	printf("Input the decimal number: ");
	scanf("%d",&m);
	
	printf("\nBinary number equivalent to said decimal number is: ");
	
	while(m)
	{
	j=m%2;
	m=m/2;
	k=k+(j*n);
	n=n*10;
	}
	printf("%d ",k);
	return 0;
}
