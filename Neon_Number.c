#include<stdio.h>
int main()
{
    int n,rem,s=0,sqrt;
    scanf("%d",&n);
    sqrt=n*n;
    while(sqrt>0)
    {
        rem=sqrt%10;
        s=s+rem;
        sqrt/=10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}