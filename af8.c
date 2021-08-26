#include<stdio.h>
int main()
{
	int i=1, n, a=1, sum=0;
	printf("Input number of terms:");
	scanf("%d",&n);
	
	while(i<=("%d",n))
	{
		printf("%d\t",a);
		sum=sum+a;
		a+=2;
		i+=1;
	}
	printf("\nThe sum of the odd Natural numbers upto %d terms:%d",n,sum); 
	
	return 0;
}
