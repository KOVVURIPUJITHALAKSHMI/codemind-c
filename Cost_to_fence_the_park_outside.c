#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ar;
    ar=l*b;
    int area;
    area=(l+2*w)*(b+2*w);
    int a;
    a=area-ar;
    int cost;
    cost=a*c;
    printf("%d",cost);
}