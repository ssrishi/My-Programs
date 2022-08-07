#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    switch(year%100==0)
    {
    case 1:
        switch (year%400==0)
        {
        case 1:
            printf("Leap year");
            break;
        case 0:
            printf("Not Leap year");
            break;
        }break;
    case 0:
        switch (year%4==0)
        {
        case 1:
            printf("Leap year");
            break;
        case 0:
            printf("Not Leap year");
            break;
        }
    }
    return 0;
}



