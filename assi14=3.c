#include<stdio.h>
int main()
{
    int sum_odd=0,sum_even=0,i,a[10];
    printf("enter the array element:");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
        if(a[i]%2==0)
            sum_even=sum_even+a[i];
        else
            sum_odd=sum_odd+a[i];
    }
    printf("sum of odd number in an array is %d",sum_odd);
    printf("\n sum of even number in an array is %d",sum_even);
}