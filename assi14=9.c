#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("how many number you want to print:");
    scanf("%d",&n);
    printf("enter the %d array element:",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",a+i);
    }
    printf("array element in the reverse order are:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

}