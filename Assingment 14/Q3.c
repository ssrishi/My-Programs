#include<stdio.h>
int main()
{
    int a[10],sum_even=0,sum_odd=0,i;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            sum_even+=a[i];
        else
            sum_odd+=a[i];
    }
    printf("Even number sum is %d\nOdd number sum is %d\n",sum_even,sum_odd);
    return 0;
}

