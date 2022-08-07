#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n-1;i>1;i--)
    {
        if (n%i==0)
        {
            printf("Not Prime Number");
            break;
        }
    }
    if(i==1)
        printf("Prime Number");
    return 0;
}
