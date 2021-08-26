#include<stdio.h>
int main()
{
	int i;
		char j[100];
	printf("Input the string: ");
	gets(j);
	

	i=strlen(j);
		printf("\nSo, the length of the string '%s' is: %d",j,i);
	return 0;
}
