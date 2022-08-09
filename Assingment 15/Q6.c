#include<stdio.h>
void reverse_array(int[],int);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    reverse_array(a,n);
    return 0;
}
void reverse_array(int b[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
        printf("%d ",b[i]);
}
