#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n*n;
	int c=n;
	int s=0,r;
	while(n!=0)
	{
	 r=n%10;
	 s=s*10+r;
	 n=n/10;	
	}
	int d;
	d=s*s;
	int p=0,q;
	while(d!=0)
	{
		q=d%10;
		p=p*10+q;
		d=d/10;
	}
	if(p==a)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}