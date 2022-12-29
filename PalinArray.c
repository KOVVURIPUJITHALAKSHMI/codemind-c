#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        int r,rev=0,t;
        t=a;
        while(a!=0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
    if(rev==t)
    {
        c++;
    }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}