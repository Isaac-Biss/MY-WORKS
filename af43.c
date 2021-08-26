#include<stdio.h>
int main()
{
	int i, j, k, n, p;
	
	printf("Input 1st number for HCF: ");
	scanf("%d",&i);
	n=i;
	printf("Input 2nd number for HCF: ");
	scanf("%d",&j);
	p=j;
	while(i!=j)
	{
		if(i>j)
		{
			i-=j;
		}
		else
		{
			j-=i;
		}
	}
	printf("HCF of %d and %d is: %d",n,p,i);
	
	return 0;
}
