#include<stdio.h>
#include<string.h>
struct Employee
    {
        int id;
        char name[30];
        float salary;
    };
struct Employee input();

int main()
{
    struct Employee E1;
    E1 = input();
    return 0;
}
struct Employee input()
{
    struct Employee e;
    printf("Enter id, name, salary: ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,30,stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%f",&e.salary);
    return e;
}