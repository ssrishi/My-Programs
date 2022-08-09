#include<stdio.h>
void merge_array(int[],int[],int);
int main()
{
    int i,n;
    printf("Enter array size");
    scanf("%d",&n);
    int a[n],A[n];
    printf("Enter 1st array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    merge_array(a,A,n);
}
void merge_array(int a[],int A[],int n)
{
    int i,j,num,k;
    int b[2*n];
    //merging array into another array.
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i,j=0;i<2*n;i++,j++)
        b[i]=A[j];
    //Sorting in descending order.
   for(i=0;i<2*n-1;i++)
    {
        for(j=i+1;j<2*n;j++)
        if(b[i]<b[j])
        {
            num=b[i];
            b[i]=b[j];
            b[j]=num;
        }
    }
    for(i=0;i<2*n;i++)
        printf("%d ",b[i]);
}
