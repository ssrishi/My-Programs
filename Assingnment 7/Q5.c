#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(max=a>b?b:a; max>1;max--)
    {
        if(a%max==0 && b%max==0)
        {
            printf("%d and %d are not co-prime",a,b);
            break;
        }
    }
     if (max==1)
        printf("%d and %d are not co-prime",a,b);
    return 0;
}

