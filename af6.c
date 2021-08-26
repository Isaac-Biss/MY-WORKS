#include<stdio.h>
int main()
{
	int i, n, multiple=1, factor;
	
	printf("Input the number(Table to be calculated):");
	scanf("%d",&n);
	
	while(factor<10)
	{
	factor =(multiple)/("%d",n);
		if(multiple%("%d",n)==0)
		{
			printf("%d*%i=%i\n",n,factor,multiple);
		}
		multiple =multiple+1;	
	}
	return 0;
}
