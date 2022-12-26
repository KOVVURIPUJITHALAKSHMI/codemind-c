#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n*n;
    int rem,sum=0;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}