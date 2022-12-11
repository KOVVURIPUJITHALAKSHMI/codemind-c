#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf;
    pf=0.12*bs;
    float gs;
    gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}