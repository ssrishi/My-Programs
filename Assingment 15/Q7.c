#include<stdio.h>
int duplicate_elements(int[],int);
int main()
{
    int n,i,total;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    total = duplicate_elements(a,n);
    printf("%d",total);
}
int duplicate_elements(int b[],int size)
{
    int count=0,i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[i]==b[j])
                count++;
        }
    }
    return count;
}
