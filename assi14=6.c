#include<stdio.h>
int main()
{
    int a[10],i,temp,j;
    printf("enter the array element:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }
    }
    printf("sorted array elements are:");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
}