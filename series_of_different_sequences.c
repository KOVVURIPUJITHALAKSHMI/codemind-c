#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b,k1=0,k2=0,h,l;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            a=pow(5,k1);
            h=a-3;
            printf("%d ",h);
            k1++;
        }
        else
        {
            b=pow(3,k2);
            l=b+2;
            printf("%d ",l);
            k2++;
        }
    }
}