#include<stdio.h>
#include<conio.h>
int main()
{
    int dd,mm,yyyy;
    printf("Enter date (dd/mm/yy): ");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("Day-%d ,Month-%02d ,Year-%d",dd,mm,yyyy);
    return 0;
}
