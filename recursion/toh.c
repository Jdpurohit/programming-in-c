/*
Program which uses recursion to solve tower of hanoi problem
*/

#include<stdio.h>
void toh(int n, char x, char y, char z)
{
	if(n>1)
	{	
		toh(n-1, x, z, y);
		printf("Move top disk from %c -> %c \n", x, y);
		toh(n-1,z,y,x);		
	}
	else if(n==1)
		printf("Move top disk from %c -> %c \n", x, y);
}
int main()
{	
	int n=3;
	toh(n, 'x', 'y', 'z');
	return 0;
}
