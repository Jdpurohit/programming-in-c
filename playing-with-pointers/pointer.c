#include<stdio.h>
	
int main()
{
	char x[]="letsexploretheworld!";
	int *y=x;

	printf("%c\n",*y);
	printf("%c\n",*(++y));
	printf("%c\n",*x);
	printf("%c\n",*(x++));	
/*
	printf("%d x\n",x);
	printf("%u &x\n",&x);
	printf("%d y\n",y);
	printf("%d *y\n",*y);
	printf("%d &y\n",&y);
*/
	return 0;
}
