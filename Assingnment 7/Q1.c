#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,a=-1,b=1,c,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%d",c);
    return 0;
}

