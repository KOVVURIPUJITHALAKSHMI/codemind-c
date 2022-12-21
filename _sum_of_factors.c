#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int f=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            f=f+i;
        }
        
    }
     printf("%d",f);
}