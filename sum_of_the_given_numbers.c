#include<stdio.h>
int main()
{
    int n,a,b,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
    return 0;
}