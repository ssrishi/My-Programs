#include<stdio.h>
#include<conio.h>
int main()
{
    int cost_price, sell_price;
    float profit_percent, loss_percent;
    printf("Enter the cost and selling price of a product: ");
    scanf("%d%d", &cost_price, &sell_price);
    if (sell_price>cost_price)
    {
        profit_percent =(sell_price-cost_price)*100/cost_price;
        printf("%.2f percent profit",profit_percent);
    }
    else
    {
         loss_percent =(cost_price-sell_price)*100/cost_price;
        printf("%.2f percent loss",loss_percent);
    }
    return 0;
}
