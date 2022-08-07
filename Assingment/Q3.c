#include<stdio.h>
int main()
{
    int n;
    printf("Enter a week number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Happy Sunday\nThe goal of Sunday is to leave your home as little as possible.");
        break;
    case 2:
        printf("Happy Monday\nWhen you have a dream, you've got to grab it and never let go.");
        break;
    case 3:
        printf("Happy Tuesday\nLet your unique awesomeness and positive energy inspire confidence in others.");
        break;
    case 4:
        printf("Happy Wednesday\nWednesday don't make wishes make commitments. Success is not luck!.");
        break;
    case 5:
        printf("Happy Thrusday\nThere are so many days in a week but my favorite is still Thursday because it is totally fabulous.");
        break;
    case 6:
        printf("Happy Friday\nWithout Friday, the weekend would be half over already.");
        break;
    case 7:
        printf("Happy Saturday\nI'd be quite happy if I spent from Saturday night until Monday morning alone in my apartment with a book.");
        break;
    default:
        printf("Invalid data");
        break;
    }
}