#include<stdio.h>
void swp(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("%d
%d",a,b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swp(a,b);
}