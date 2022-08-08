#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a=5,b=5;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==9)
            {
                if(j<=i)
                    printf("*");
            }
            else if(i%2!=0)
            {
                if(j==a || j==b)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        if(i%2!=0)
        {
            a--;
            b++;
        }
        printf("\n");
    }
    return 0;
}
