#include<stdio.h>
int main()
{
    int i,j,a[3][3],r_sum=0,c_sum=0;
    printf("Enter array elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            r_sum+=a[i][j];
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
            c_sum+=a[i][j];
    }
    printf("Sum of rows of matrix is %d.\n",r_sum);
    printf("Sum of columns of matrix is %d.\n",c_sum);
    return 0;
}
