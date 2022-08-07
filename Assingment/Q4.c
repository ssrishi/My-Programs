#include<stdio.h>
int main()
{
    int side1,side2,side3,choice;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1 == side2 || side2 == side3 || side1 == side3)
        choice = 1;
    else if(side1*side1 == side2*side2 +side3*side3|| side2*side2 == side1*side1 + side3*side3 || side1*side1 == side3*side3 + side2*side2)
        choice = 2;
    else if (side1 == side2 && side2== side3)
        choice = 3;
    else
        choice = 4;
    switch (choice)
    {
        case 1:   
            printf("Trangle is isoceles");
            break;
        case 2:
            printf("Trangle is Right angled triangle");
            break;
        case 3:
            printf("Trangle is equilateral triangle");
            break;
        case 4:
            break;
    }
    return 0;
}