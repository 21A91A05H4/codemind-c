#include<stdio.h>
int main()
{
    int n1=0,n2=1,i,num,n3;
    scanf("%d",&num);
    if((num==0)|| (num==1))
    {
        printf("True");
    }
    else
    {
        n3=n1+n2;
        while(n3<num)
        {
            n1=n2;
            n2=n3;
            n3=n1+n2;
        }
        if(n3==num)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    
    return 0;
    
}