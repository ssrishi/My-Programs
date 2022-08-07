#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);
    i=n>m?n:m;
    while(1)
    {
        if(i%n==0 && i%m==0)
        {
            printf("LCM is %d",i);
            break;
        }
        i++;
    }

}
