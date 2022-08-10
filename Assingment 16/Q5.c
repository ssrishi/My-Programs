#include<stdio.h>
int main()
{
    int sum=0,a[3][3],i,j;
    printf("Enter array elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0,j=0;i<3;j++,i++)
        sum+=a[i][j];
    printf("Sum of  left diagonals of matrix is %d",sum);
    return 0;
}

