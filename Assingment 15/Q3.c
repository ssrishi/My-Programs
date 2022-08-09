#include<stdio.h>
int sorting(int[],int);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sorting_array(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
int sorting_array(int b[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
    }
    return 0;
}

