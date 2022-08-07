#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers(a, b, c): ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>=b) && (a>=c))
    {
        if (a==b)
            printf("a and b is %d both are same.",a);
        else if (a==c)
            printf("a and c is %d both are same.",a);
        else
            printf("a is greatest among all the numbers.");
    }
    else if ((b>=a) && (b>=c))
    {
        if (b==c)
            printf("b and c is %d both  are same.",b);
        else
            printf("b is greatest among all the numbers.");
    }
    else if ((c>=a) && (c>=b))
    {
            printf("%c is greatest among all the numbers.");
    }
    return 0;
}
