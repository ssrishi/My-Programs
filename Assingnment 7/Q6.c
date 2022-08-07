#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=2;i<100;i++)
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
