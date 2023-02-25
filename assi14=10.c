#include<stdio.h>
int main()
{
    int a[20],b[20],i,n;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the %d array element",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("copied array element are:");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}