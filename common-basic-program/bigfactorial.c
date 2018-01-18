/*
Program to find factorial value for the numbers which have a large value and can't be represented in the basic data type.
*/

#include <stdio.h>
 
int main()
{
    int t,n,temp,carry,len,res[1000];
    scanf("%d",&t);
    while(t)
    {
        carry=0;
        res[0]=1;
        len=1;
        scanf("%d",&n);
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<len;j++)
            {
                temp=carry+(res[j]*i);
                carry=temp/10;
                res[j]=temp%10;                 
            }
            while(carry>0)
            {
                len++;
                res[len-1]=carry%10;
                carry=carry/10;
            }
        }
        for(int k=len-1;k>=0;k--)
            printf("%d",res[k]);
            
        printf("\n");
        t--;
    }
    return 0;
}
