#include<stdio.h>
int main()
{
	int i, j, p, m, n;
	printf("Enter the height: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			p=1;
			m=0;
		}
		else
		{
			p=0;
			m=1;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d",p);
			}
			else
			{
				printf("%d",m);	
			}
		}
		printf("\n");
		
	}
	return 0;
}
