#include<stdio.h>
int main()
{
    int a[10],great_num,i;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    great_num = a[0];
    for(i=0;i<=9;i++)
    {
        if(great_num<a[i])
            great_num=a[i];
    }
    printf("greatest number %d\n",great_num);
    return 0;
}


