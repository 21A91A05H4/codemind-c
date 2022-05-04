#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,arr[100],osum=0,esum=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            osum=osum+arr[i];
        }
        else
        {
            esum=esum+arr[i];
        }
    }
    diff=abs(esum-osum);
    printf("%d",diff);
}