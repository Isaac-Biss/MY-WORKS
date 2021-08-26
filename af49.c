#include<stdio.h>
int main()
{
	int i ,j ,k ,m ,n , p, sum=0;
	
	printf("Input the starting number of the A.P series: ");
	scanf("%d",&n);
	
	printf("Input the number of items for the A.P series: ");
	scanf("%d",&m);
	
	printf("Input the common difference of the A.P series: ");
	scanf("%d",&p);
	
	printf("The sum of the A.P series are: ");
	
	sum=(m*(2*n+(m-1)*p))/2;
	k=n+(m-1)*p;
	
	for(i=n;i<=k;i=i+p)
	{
		if(i!=k)
		{
			printf("%d + ",i);
		}
		else
		{
			printf("%d = %d",i,sum);
		}
	}
//	printf("\n");
	
	return 0;
}
