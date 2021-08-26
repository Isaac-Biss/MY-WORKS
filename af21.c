#include<stdio.h>
int main()
{
	int i, j, n, m, sum=0;
	
	printf("Input the number of terms:");
	scanf("%d",&n);
	
	printf("Enter the number to used in the series two times: ");
	scanf("%d%d",&m,&j);
	
//	printf("Enter the number: ");
//	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",m);
		if(i<n)
		{
			printf(" ");
		}
		sum=sum+m;
		m=(m*10)+j;	
	

	}
	printf("\nThe sum of the series = %d\n",sum);
	return 0;
}
