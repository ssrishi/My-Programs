#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0,max=0,k;
    printf("Enter array elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(max<count)
        {
            max=count;
            k=i;
        }
        count=0;
    }
    printf("Row %d has maximum ones in the row.\n",k+1);
    return 0;
}
