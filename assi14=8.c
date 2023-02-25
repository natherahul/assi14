#include<stdio.h>
int main()
{
    int a[10],i,temp,sec_min,min;
    printf("enter the array element:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",a+i);

    }
    sec_min=a[0];
    for(i=0;i<=9;i++)
    {
        if(sec_min>a[i])
        {
            temp=min;
            min=a[i];
            sec_min=temp;
        }
    }
    printf("second minimum element in the array is %d",sec_min);
}