#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("how many element you want to enter:");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of %d  element are %d",n,sum);
}