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
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>8)
        printf("It is sparse matrix");
    else
        printf("It is not sparse matrix");
    return 0;
}
