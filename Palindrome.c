#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        i=n%10;
        sum=(sum*10)+i;
        n=n/10;
    }
    if(x==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}