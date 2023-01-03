#include<stdio.h>
int main()
{
    int i,n,sum=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        s=s+(i*i);
    }
    int d=sum*sum;
    int c=d-s;
    printf("%d",c);
    
}