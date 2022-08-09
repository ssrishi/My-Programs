#include<stdio.h>
int greatest(int[],int);
int main()
{
    int n,great_num,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    great_num = greatest(a,n);
    printf("greatest number in the array is %d..\n",great_num);
    return 0;
}
int greatest(int b[],int size)
{
    int great_num,i;
    great_num = b[0];
    for(i=1;i<size;i++)
    {
        if(great_num<b[i])
            great_num=b[i];
    }
    return great_num;
}



