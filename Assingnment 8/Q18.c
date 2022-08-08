#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a=5,b=5;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i%2!=0)
            {
                if(j>=a && j<=b)
                    printf("*");
                else
                    printf(" ");
            }
        }
        if(i%2!=0)
        {
            a--;
            b++;
        }
        printf("\n");
    }
    a=2;
    b=8;
    for(i=0;i<=7;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i%2!=0)
            {
                if(j>=a && j<=b)
                    printf("*");
                else
                    printf(" ");
            }
        }
        if(i%2!=0)
        {
            a++;
            b--;
        }
        printf("\n");
    }
}
