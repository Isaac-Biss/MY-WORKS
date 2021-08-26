#include<stdio.h>
#include<math.h>
int main()
{
	int i, m, n;
	float sum=0, k=1, j, x, p;
	
	printf("Input the value of x: ");
	scanf("%f",&x);
	
	printf("Input the number of terms: ");
	scanf("%d",&n);
	
	sum=x;
	m=-1;
	printf("The values of the series: \n");
	printf("%.f\n",x);
	for(i=1;i<n;i++)
	{
		j=(2*i+1);
		k=pow(x,j);
		p=k*m;
		
		printf("%.f\n",p);
		sum=sum+k;
		m=m*(-1);

	}

	printf("\nThe sum= %.f",sum);
	
	return 0;
}
