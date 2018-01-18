#include<stdio.h>
int f(int n){
	if(n==0 || n==1)
		return 1;
	else 
		return n*f(n-1);
}
int main(){
	int a;
	scanf("%d",&a);

	int fact=f(a);
	printf("Value of %d! is : %d\n",a,fact);
	return 0;
}
