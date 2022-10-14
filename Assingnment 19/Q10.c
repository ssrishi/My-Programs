#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char  username1[30]={"chloapnausernamebatao"},password1[30]={"merausernamehimerapasswordhai"},username[30],password[30];
    printf("Enter 1 to enter username and password to login into your system: ");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("Enter username: ");
        gets(username);
        if(strcmp(username1,username)==0)
        {
            printf("Enter password: ");
            gets(password);
            if(strcmp(password1,password)==0)
            {
                printf("Welcome You have succesfully logged in to your account.");
            }
            else
            {
                printf("You have entered a wrong password.");
                break;
            }
        }
        else
        {
            printf("You have entered a wrong username.");
            break;
        }
    default:
        break;
    }
    return 0;
}