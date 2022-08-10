#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k,m;
    printf("Enter array elements: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0,m=0;i<3;i++,m++)
    {
        for(j=0,k=0;j<3;j++,k++)
        {
            b[i][j] = a[k][m];
        }
    }
    printf("Transpose of a matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
}
