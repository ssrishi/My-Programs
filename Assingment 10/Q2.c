#include<stdio.h>
float simple_interest(float,float,float);
int main()
{
    float p,r,t,si;
    printf("Enter principle, rate and time: ");
    scanf("%f %f %f",&p,&r,&t);
    si = simple_interest(p,r,t);
    printf("%.2f",si);
    return 0;
}
float simple_interest(float p, float r, float t)
{
    return (p*r*t)/100;
}
