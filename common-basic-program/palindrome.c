/*
Program checks wheather the decimal number is palindome or not.
*/ 
#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a=n,r=0,remainder=0,rv=0;

	while(a>0){
		remainder=a%10;
		rv=rv*10+remainder;
		a/=10;
	}

	(n==rv)?printf("Palindrome\n"):printf("Not Palindrome\n");

	return 0;
}
