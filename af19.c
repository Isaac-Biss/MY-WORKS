#include<Stdio.h>
int main()
{
	int i, n;
	float sum=0.0, k, j=1.0;
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
	printf("For: ");
	
	for(i=1;i<=n;i++)
	{
		k= 1.0/(j++);
		sum=sum+k;
		printf("1/%d + ",i);
	}
	printf("\nSum of the series upto %d terms is: %f",n,sum);
	return 0;
}
