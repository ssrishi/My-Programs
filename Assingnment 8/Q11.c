#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k=64;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=5)
            {
                k++;
                printf("%c",k);
            }
            else if(j>5 && j<5+i)
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
