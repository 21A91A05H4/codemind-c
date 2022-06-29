#include<stdio.h>
int main()
{
    int N,M,gcd,i;
    scanf("%d%d",&N,&M);
    for(i=1;i<=N && i<=M;i++)
    {
        if(N%i==0 && M%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}