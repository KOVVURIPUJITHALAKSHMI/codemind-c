#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b,k1=1,k2=1;
    scanf("%d",&n);
    printf("0 ");
    printf("0 ");
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
           a=pow(3,k1);
           printf("%d ",a-1);
           k1++;
        }
        else
        {
            b=pow(2,k2);
            printf("%d ",b-1);
            k2++;
        }
    }
}