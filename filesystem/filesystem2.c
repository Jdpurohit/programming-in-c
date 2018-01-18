#include<stdio.h>
#include<stdlib.h>
#define DF 100

char * reallocate(char* a, int capacity)
{
  return (char *)realloc(a,capacity+DF);
}

int main()
{
  char *p;
  char ch;
  int count=0;
  int capacity=DF;
  p=(char*)malloc(capacity*sizeof(char));

  while(ch=getchar() != EOF)
  {
    if(count==capacity)
    {
      p=reallocate(p,capacity);
      capacity+=DF;
    }
    p[count++]=ch;
  }
  p[count]='\0';

  puts(p);

  return 0;
}
