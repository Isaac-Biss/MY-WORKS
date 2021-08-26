#include<stdio.h>
int main()
{
	int n, i=1;
	printf("Enter the limit:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i=i+1;
	}
	return 0;
}
