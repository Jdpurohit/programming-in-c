/*
Here the program counts the number of newlines in the input
*/

#include<stdio.h>

int main()
{
  int linecount=0;
  char ch;
  while( (ch=getchar())!=EOF )
  {
    if(ch=='\n')
      ++linecount;
  }
  printf("\nNumber of lines are : %d \n",linecount);

  return 0;
}
