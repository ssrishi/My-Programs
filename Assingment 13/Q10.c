#include<stdio.h>
int power(int,int);
int main()
{
    int num,pow,total;
    printf("Enter number and his power: ");
    scanf("%d %d",&num,&pow);
    total = power(num,pow);
    printf("%d",total);
    return 0;
}
int power(int num,int pow)
{
    int result;
    if(pow==1)
        return num;
    result = num*power(num,pow-1);
    return result;
}

