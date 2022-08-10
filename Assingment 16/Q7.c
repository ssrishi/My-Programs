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
    printf("Lower triangular matrix is:\n");
    for(i=1;i<4;i++)
    {
        for(j=0;j<i;j++)
           printf("%d ",a[i][j]);
        printf("\n");
    }
}
