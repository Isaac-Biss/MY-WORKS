#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, a, k, n;
	int sum=0, r;
	
	printf("Input the 1st number of the G.P series: ");
	scanf("%d",&a);
	
	printf("Input the number or terms in the G.P series: ");
	scanf("%d",&n);
	
	printf("Input the common ratio of the G.P series: ");
	scanf("%d",&r);
	
//	sum=(a*(1-pow(r,n)))/(1-r);
//	i=a*pow(r,n-1);
	printf("The numbers of the G.P series: ");
	k=a;//*pow(r,n-1);
	
	for(i=0;i<=n;i=i++)
	{
	//	if(i!=k)
	//	{
			printf("%d ",k);
			sum=sum+k;
			k=k*r;
	//	}
	//	else
	//	{
			
	}
	printf("\nThe Sum of the G.P series: %d",sum);
	return 0;
}
