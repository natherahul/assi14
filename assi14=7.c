#include<stdio.h>
int main()
{
    int a[10],i,max,sec_max,temp;
    printf("enter the array element:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",a+i);

    }
    sec_max=a[0];
    for(i=1;i<=9;i++)
    {
        if(sec_max<a[i])
        {
            temp=max;
            max=a[i];
            sec_max=temp;
            
        }
    }
    printf("second maximam element in array is %d ",max);
}