#include<stdio.h>
int main()
{
    int n,s=0,f=1,rem;
    scanf("%d",&n);
    while(n!=0)
    {
      rem=n%10;
      s=s+rem;
      f=f*rem;
      n=n/10;
    }
    //printf("%d%d",s,f);
    if(s==f)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}