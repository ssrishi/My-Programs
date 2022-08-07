#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    switch(number%2==0)
    {
    case 1:
        number+=1;
        printf("%d",number);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
