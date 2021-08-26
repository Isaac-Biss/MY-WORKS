#include<stdio.h>
int main()
{
	int i, HCF, k, n, LCM;
	
	printf("Input the 1st number: ");
	scanf("%d",&n);
	
	printf("Input the 2nd number: ");
	scanf("%d",&k);
	
	for(i=1;i<=n&&i<=k;i++)
	{
		if(n%i==0&&k%i==0)
		{
			HCF=i;
		}
	}
	LCM=(n*k)/HCF;
	printf("The LCM of %d and %d is: %d",n,k,LCM);
	return 0;
}
