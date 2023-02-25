#include<stdio.h.>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter the array element:");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("average of the 10 element are %f",avg);
}