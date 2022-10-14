#include<stdio.h>
#include<string.h>
struct Employee
    {
        int id;
        char name[30];
        float salary;
    };
void sort(struct Employee *);
struct Employee input();
void display(struct Employee );
int main()
{
    struct Employee e[10];
    int i;
    for(i=0;i<10;i++)
        e[i]=input();
    sort(e);
    for(i=0;i<10;i++)
        display(e[i]);
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
void display(struct Employee e)
{
    printf("\n%d %s %.2f",e.id,e.name,e.salary);
}
void sort(struct Employee *ptr)
{
    struct Employee temp;
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp((ptr+i)->name,(ptr+j)->name)>0)
            {
                temp= *(ptr+i);
                *(ptr+i)= *(ptr+j);
                *(ptr+j)= temp;
            }
        }
    }
}