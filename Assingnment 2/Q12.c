#include<stdio.h>
#include<conio.h>
int main()
{
    float inr, usd;
    printf("Enter amount in rupees :Rs");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("%.2f rupees in dollars are %.2f",inr,usd);
    return 0;
}
