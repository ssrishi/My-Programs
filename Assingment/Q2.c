#include<stdio.h>
int main()
{
    int num1, num2,choice;
    printf("Enter number from below to perform particular function\n");
    printf("For Addition: enter 1\nFor Subtraction: enter 2\nFor Multiplication: enter 3\nFor division: enter 4\nExit: enter 5");
    
    printf("\n\n Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter two number: \n");
        scanf("%d %d",&num1, &num2);
        printf("Addition of to number is %d",num1+num2);
        break;
    case 2:
        printf("Enter two number: \n");
        scanf("%d %d",&num1, &num2);
        printf("subtraction of to number is %d",num1-num2);
        break;
    case 3:
        printf("Enter two number: \n");
        scanf("%d %d",&num1, &num2);
        printf("Multiplication of to number is %d",num1*num2);
        break;
    case 4:
        printf("Enter two number: \n");
        scanf("%d %d",&num1, &num2);
        printf("Division of to number is %d",num1/num2);
        break;
    case 5:
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}