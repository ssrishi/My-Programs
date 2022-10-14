#include<stdio.h>
#include<string.h>
struct Student
    {
        int roll_no;
        char name[30];
        int clas;
    };
struct Student input();
void display(struct Student );
int main()
{
    int n;
    printf("How many students information you want to store enter number: ");
    scanf("%d",&n);
    struct Student s[n];
    int i;
    for(i=0;i<n;i++)
        s[i]=input();
    for(i=0;i<n;i++)
        display(s[i]);
}
struct Student input()
{
    struct Student s;
    printf("Student Enter your roll number, name and class: ");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    fgets(s.name,30,stdin);
    scanf("%d",&s.clas);
    s.name[strlen(s.name)-1] = '\0';
    return s;
}
void display(struct Student s)
{
    printf("\n%d %s %d",s.roll_no,s.name,s.clas);
}
