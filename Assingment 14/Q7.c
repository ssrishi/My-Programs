#include<stdio.h>
int main()
{
    int a[10],i,j,num;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        if(a[i]>a[j])
        {
            num=a[i];
            a[i]=a[j];
            a[j]=num;
        }
    }
    printf("%d ",a[8]);
    return 0;
}




