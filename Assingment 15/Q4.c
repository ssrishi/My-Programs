#include<stdio.h>
void rotate_array(int[],int );
int main()
{
    int n,i;
    printf("array size");
    scanf("%d",&n);
    int a[n];
    printf("Enter values of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    rotate_array(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
void rotate_array(int b[],int size)
{

    int n,dir,i,temp=0;
    printf("Enter by which position you want to rotate: ");
    scanf("%d",&n);
    printf("In which direction you want to rotate(for left enter 1 or for right enter 0): ");
    scanf("%d",&dir);
    if(dir==0)
    {
        while(n)
        {
            temp=b[size-1];
            for(i=size-1;i>=1;i--)
                b[i] = b[i-1];
            b[0] = temp;
            n--;
        }
    }
    else
    {
        while(n)
        {
            temp=b[0];
            for(i=0;i<size-1;i++)
                b[i] = b[i+1];
            b[size-1] = temp;
            n--;
        }
    }
}
