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
            if(j>=1 && j<=5-i)
            {
                k++;
                printf("%d",k);
            }
            else if(j>=3+i && j<=7 )
            {
                if(j==5 && i==1)
                {
                    k--;
                    printf("%d",k);
                    k--;
                }
                else
                {
                    printf("%d",k);
                    k--;
                }

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

