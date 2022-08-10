#include<stdio.h>
int main()
{
    int a[4][4],i,j,count=0;
    printf("Enter array elements: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Upper triangular matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j>=i+1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

