#include<stdio.h>
int main()
{
	int i, j, n, k, p=1;
	
	printf("Input the number of rows :" );
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
				printf("  ");	
 		}
			printf("%4d",1);
		for(k=0;k<=i;k++)
		{
		
			if(k==0||i==0)
			{
				p=1;
			}
			else
			{
				p=p*(i-k+1)/k;
				printf("%4d",p);
			
			}
		}
		printf("\n");
	}
	return 0;
}
