#include<stdio.h>
int main()
{
	int i, n, k=0;
	printf("Input the number: ");
	scanf("%d",n);
	
	printf("The positive divisor: ");
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			k=k+i;
			printf("%d ",i);	
		}
	
	}
	
		printf("The sum of the divisor is: %d",k);
		
		if(k==n)
		{
		print("So, the number is not perfect.")	;
		}
		else
		{
		print("So, the number is perfect.")	;
		}
		printf("\n");

	return 0;
}
