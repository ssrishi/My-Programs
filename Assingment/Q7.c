#include<stdio.h>
#include<conio.h>
int main()
{
    float unit, unit_bill,total_bill;
    printf("Enter Electric unit: ");
    scanf("%f",&unit);
    switch(unit<=50)
    {
        case 1:
            unit_bill = unit*0.5;
            break;
        case 0:
            switch(unit<=150)
            {
                case 1:
                    unit_bill = 25 + (unit-50)*.75;
                    break;
                case 0:
                    switch(unit<=250)
                    {
                    case 1:
                        unit_bill = 25 + 75 + (unit-150)*1.2;
                        break;
                    case 0:
                            unit_bill = 25 +75 + 120 + (unit-250)*1.5;
                            break;
                    }break;
            }break;
    }
    total_bill = unit_bill + unit_bill*20/100;
    printf("%.2f",total_bill);
}

