#include<stdio.h>
#include<string.h>
struct Employee
    {
        int id;
        char name[30];
        float salary;
    };
void highest_salary(struct Employee *);
int main()
{
    struct Employee e[10];
    int i;
    printf("Every Employee Please enter your salary");
    for(i=0;i<10;i++)
        scanf("%f",&e[i].salary);
    highest_salary(e);
}
void highest_salary(struct Employee *ptr)
{
    int i;
    float high_salary;
    high_salary=ptr->salary;
    for(i=0;i<10;i++)
    {
        if((ptr+i)->salary >high_salary)
            high_salary = (ptr+i)->salary;
    }
    printf("Highest salary amoung employ is %.2f",high_salary);
}