#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3]={0,0,0,0,0,0,0,0,0},i,j,l,m,x,y;
    printf("Enter elements of 1st array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter elements of 2nd array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Product of two array is: \n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             for(l=0,m=0;l<3;l++,m++)
                c[i][j]= c[i][j] + a[i][m]*b[l][j];
         }
     }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
