#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=4)
            {
                k++;
                printf("%c",k);
            }
            else if(j>4 && j<=8-i)
            {
                k--;
                printf("%c",k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

