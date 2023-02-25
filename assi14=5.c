#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("enter the array element:");
    for(i=0;i<9;i++)
    {
        scanf("%d",(a+i));
    }
    min=a[0];
    for(i=0;i<9;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("smallest element in the array:%d",min);
}