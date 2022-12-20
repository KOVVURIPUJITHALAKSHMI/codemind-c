#include<stdio.h>
int main()
{
    int rev,r,n;
    scanf("%d",&n);
    rev=0;
    int temp=n;
    while(n!=0)
    {
       r=n%10;
       rev=rev*10+r;
       n=n/10;
       
    }
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}