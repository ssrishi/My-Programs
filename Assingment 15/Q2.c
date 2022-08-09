#include<stdio.h>
int smallest(int[],int);
int main()
{
    int n,small_num,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    small_num = smallest(a,n);
    printf("Smallest number in the array is %d.\n",small_num);
    return 0;
}
int smallest(int b[],int size)
{
    int small_num,i;
    small_num = b[0];
    for(i=1;i<size;i++)
    {
        if(small_num>b[i])
            small_num=b[i];
    }
    return small_num;
}




