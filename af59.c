#include<stdio.h>
int main()
{
	int i, j ,k , n, p;
	printf("Input an integer: ");
	scanf("%d",&n);
	j=n;
	while(j!=0)
	{
		j/=10;
		p++;
	}
	j=n;
	while(j!=0)
	{
		k=j%10;
		i+=pow(k,p);
		j/=10;
	}
	if(i==n)
	{
		printf("%d is an Armstrong number.",n);
	}
	else
	{
		printf("%d is not an Armstrong number.",n);	
	}
	return 0;
}
