#include<stdio.h>
#include<conio.h>
int main()
{
    int radius;
    float pie = 3.14, area;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    area = pie*radius*radius;
    printf("Area of circle is %f having a radius %d",area,radius);
    return 0;
}
