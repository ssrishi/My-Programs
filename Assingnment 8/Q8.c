#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=4)
            {
                k++;
                printf("%d",k);
            }
            else if(j>4 && j<4+i)
            {
                k--;
                printf("%d",k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
