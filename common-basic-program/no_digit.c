/*
Program displays the number of digits in the decimal number
*/
#include<stdio.h>

int main()
{
	int n,count=0,a;
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	printf("%d has %d digits \n",n,count);
	return 0;
}
