#include<stdio.h>
int main()
{
    int n,i,f=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            f=f+i;
        }
    }
    if(f>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}