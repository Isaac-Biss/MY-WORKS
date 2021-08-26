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
	
	k=(i>j) ? i:j;
	while(1)
	{
		if(k%i==0 && k%j==0)
		{
			printf("The LCM of %d and %d is: %d",n,p,k);
			break;
		}
	k++;
	}
	
	return 0;
}
