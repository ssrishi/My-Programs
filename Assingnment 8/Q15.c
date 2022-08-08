#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==9)
            {
                if(j<=i)
                {
                    if(j%2!=0)
                        printf("*");
                    else
                        printf(" ");
                }
                else
                    printf(" ");
            }
            else if (i%2!=0)
            {
                if(j==9 ||j==9-i+1)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
