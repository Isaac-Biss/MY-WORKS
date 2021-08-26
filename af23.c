#include<stdio.h>
int main()
{
	int i, n;
	float sum=1, k, j=2, x, p=3;
	
	printf("Input the value of x: ");
	scanf("%f",&x);
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
	for(i=1;i<n-1;i++)
	{
		k=pow(x,i+1)/j;
		sum=sum+k;
		j=j*p;
		p=p+1;
	}
float ans=sum+x;
	printf("\nThe sum= %f\nNumber of terms= %d\nvalue of x= %f",ans,n,x);
	
	return 0;
}
