#include<stdio.h>
float area_of_circle(float);
int main()
{
    float radius,area;
    printf("Enter a radius: ");
    scanf("%f",&radius);
    area = area_of_circle(radius);
    printf("area of circle is %.2f",area);
    return 0;
}
float area_of_circle(float radius)
{
    return 3.14*radius;
}
