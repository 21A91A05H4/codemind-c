#include<stdio.h>
int main()
{
    int n,i,rev,rem,x,s,t=0,k;
    scanf("%d",&n);
    s=n*n;
    while(n)
    {
        rem=n%10;
        n/=10;
        rev=rev*10+rem;
        
    }
    k=rev*rev;
    while(k>0)
    {
        x=k%10;
        k/=10;
        t=t*10+x;
        
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}