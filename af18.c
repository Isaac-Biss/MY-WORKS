#include<stdio.h>
int main()
{
	int i, n;
	float sum=1, k=1, j, x;
	
	printf("Input the value of x: ");
	scanf("%f",&x);
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		j=(2*i)*(2*i-1);
		k=-k*x*x/j;
		sum=sum+k;
	}

	printf("\nThe sum= %f\nNumber of terms= %d\nvalue of x= %f",sum,n,x);
	
	return 0;
}
