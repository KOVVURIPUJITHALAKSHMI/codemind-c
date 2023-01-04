#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    float sq=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        float s=sqrt(i);
       sq=sq+s; 
    }
    printf("%.2f",sq);
}