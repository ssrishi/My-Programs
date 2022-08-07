#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(max=a>b?b:a; max>0;max--)
    {
        if(a%max==0 && b%max==0)
        {
            printf("%d is HCF",max);
            break;
        }
    }
    return 0;
}

