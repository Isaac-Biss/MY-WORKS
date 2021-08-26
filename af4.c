#include<stdio.h>
int main()
{
	int n, i, a, sum=0;
	float Average;
	
/*	printf("Enter the limit:");
	scanf("%d",n);*/
	
 	printf("Input the %d numbers:\n",10);
	while(i<10)
	{
		printf("Number-%d:",i+1);
		scanf("%d",&a);
		sum=sum + a;
		i++;
	}
	Average =(float)sum/i;
	printf("The Sum of %d no. is: %d\n",n,sum);
	printf("The Average of %d no. is: %f\n",n,Average);
	
	return 0;
}
