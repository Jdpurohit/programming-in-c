#include<stdio.h>
int fibonacci(int n)
{
	printf("1");
	int a=0,b=1,c=0;
	n--;
	while(n>0)
	{
		c=a+b;
		printf("->%d",c);
		a=b;
		b=c;
		n--;
	}
	printf("\n");
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	fibonacci(n);
}
