/* 
Here the program reads data from stdin and writes to a file, then it reads from the same file and writes it to stdout 
*/

#include<stdio.h>

int main()
{
	FILE *f;
	f=fopen("myfile.txt","w");

	if(f==NULL)
	printf("File Not created !\n");

	char ch;

	while(ch=getchar()!=EOF)
	{
		putc(ch,f);
	}
	putc('\n',f);
	fclose(f);

	f=fopen("myfile.txt","r");

	while(ch=getc(f) != EOF)
	{
		putchar(ch);
	}

	fclose(f);

	return 0;
}
