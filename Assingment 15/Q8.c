#include<stdio.h>
void print_unique_elements(int[],int);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    print_unique_elements(a,n);
    return 0;
}
void print_unique_elements(int b[],int size)
{
    int count=0,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(b[i]==b[j])
                    break;
            }
        }
        if(b[i]!=b[j])
            printf("%d ",b[i]);

    }
}
