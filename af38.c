#include<stdio.h>
int main()
{
	int i, j, k=0, n;
	 
	 printf("Input the number: ");
	 scanf("%d",&n);
	 i=n;
	 while(n!=0)
	 {
	 	j=n%10;
	 	k=k*10+j;
	 	n/10;
	 }
	 if(i==k)
	 {
	 	printf("%d is a palindrome.",i);
	 }
	 else
	 {
	 	printf("%d is not a palindrome.",i);
	 }
	return 0;
}
