#include<stdio.h>
int occurrence(int[],int);
int main()
{
    int n,i,occ;
    printf("array size");
    scanf("%d",&n);
    int a[n];
    printf("Enter values of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    occ=occurrence(a,n);
    printf("%d",occ);
    return 0;
}
int occurrence(int b[],int size)
{
    int i,j,temp;
    for(i=0;i<=size-1;i++)
    {
        for(j=i+1
            ;j<=size-1;j++)
        {
            if(b[i]==b[j])
            {
                temp=b[i];
                return temp;
            }
        }
    }
}
