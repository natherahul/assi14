#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter the array element:");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    max=a[i];
    for(i=0;i<10;i++)
    {
        if(max<a[i+1])
        {
            max=a[i+1];
        }
    }
    printf("max element in array is %d",max);
}