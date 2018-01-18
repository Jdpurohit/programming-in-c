#include<stdio.h>
int power(int a,int n)
{
	if(n==0)
		return 1;

	int c=power(a,n/2);
	if(n%2==0)
		return c*c;
	else
		return c*c*a;
}
int no_digit(int a)
{
	int count=0;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	return count;
}	
int isArmstrong(int n)
{
	int x=0,sum=0;
	int y=no_digit(n);
	int z=n;
	while(n>0)
	{
		x=n%10;
		n/=10;

		sum+=power(x,y);
	}
	if(sum==z)
		return 1;
	else 	
		return 0;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	if(isArmstrong(n))
		printf("%d is an Armstrong number !\n",n);
	else 
		printf("%d is not an Armstrong number !\n",n);
	
	return 0;
}

