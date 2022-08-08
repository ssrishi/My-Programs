#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k=64;
        for(j=1;j<=13;j++)
        {
            if(j>=1 && j<=8-i)
            {
                k++;
                printf("%c",k);
            }
            else if(j>=6+i && j<=13 )
            {
                if(j==8 && i==1)
                {
                    k--;
                    printf("%c",k);
                    k--;
                }
                else
                {
                    printf("%c",k);
                    k--;
                }

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


