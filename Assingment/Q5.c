#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a choice(1 to 3): ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;    
    default:
        printf("Invalid");
        break;
    }
    return 0;
}