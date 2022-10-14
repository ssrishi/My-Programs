#include<stdio.h>
#include<string.h>
struct Marks
    {
        int roll_no;
        char name[30];
        int chem_mark,phy_mark,math_mark;
    };
struct Marks input();
void display(struct Marks );
int main()
{
    int n=5;
    struct Marks s[n];
    int i;
    for(i=0;i<n;i++)
        s[i]=input();
    for(i=0;i<n;i++)
        display(s[i]);
}
struct Marks input()
{
    struct Marks s;
    printf("Student Enter your roll number, name: ");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    fgets(s.name,30,stdin);
    s.name[strlen(s.name)-1] = '\0';
    printf("Enter your chemistry ,physics and maths marks:");
    scanf("%d",&s.chem_mark);
    scanf("%d",&s.phy_mark);
    scanf("%d",&s.math_mark);
    s.name[strlen(s.name)-1] = '\0';
    return s;
}
void display(struct Marks s)
{
    printf("\nThe percentage is %.2f%",(s.chem_mark+s.math_mark+s.phy_mark)/3.0);
}

