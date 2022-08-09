#include<stdio.h>
void frequency(int[],int);
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    frequency(a,n);
    return 0;
}
void frequency(int b[],int size)
{
    int count=1,i,j;
    for(i=0;i<size;)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(b[i]==b[j])
                    count++;
            }
        }
        printf("frequency of %d is %d\n",b[i],count);
        i+=count;
        count=1;
    }
}

