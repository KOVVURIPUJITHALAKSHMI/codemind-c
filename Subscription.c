#include<stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>30)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}