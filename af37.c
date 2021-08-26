#include<stdio.h>
int main()
{
	int i, j=0, n;
	
	printf("Input the number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		i=n%10;
		j=j*10+i;
		n/=10;
	}
	printf("The number in reverse order is: %d",j);
	return 0;
}
