#include<stdio.h>
int main()
{
	int i, j, a, n, multiple,factor;
	printf("Input upto the table number starting from:");
	scanf("%d%d",&n,&a);
	
	for(j=n;j<=a;j++)
	{
			for(i=1;i<=8;i++)
		{
			printf("%d*%d=%d\t",i,j,j*i);
		
		}
		printf("\n");	
	}
	

		

	
	return 0;
}
