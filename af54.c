#include<stdio.h>
int main()
{
	int i=0, j, k=0, n, p=0;
	
	printf("Input an Octal number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		i=i+(n%10)*(pow(8,k));
		k++;
		n=n/10;
	}
	for(k=1;i!=0;k=k*10)
	{
		p=p+(i%2)*k;
		i=i/2;
	}
	printf("The octal number: %d\n",n);
	printf("The equivalent Binary Number: %d",p);
	
	return 0;
}
