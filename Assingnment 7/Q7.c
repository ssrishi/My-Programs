#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    for(i=2;i<m;i++)
    {
        for(j=i-1;j>1;j--)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==1)
            printf("%d ",i);
    }
    return 0;
}
