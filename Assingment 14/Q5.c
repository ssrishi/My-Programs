#include<stdio.h>
int main()
{
    int a[10],small_num,i;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    small_num = a[0];
    for(i=0;i<=9;i++)
    {
        if(small_num>a[i])
            small_num=a[i];
    }
    printf("Smallest number %d\n",small_num);
    return 0;
}



