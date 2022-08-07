#include<stdio.h>
#include<conio.h>
int main()
{
    int a=-1,b=1,c,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        if (c==n)
        {
            printf("%d is in fibonacci series",n);
            break;
        }
        else if (c>n)
        {
            printf("%d is not in fibonacci series",n);
            break;
        }
        a=b;
        b=c;
    }
    return 0;
}

