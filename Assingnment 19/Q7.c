#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[] = "25.45.177.250";
    char *a = strtok(ip,".");
    while(a!=NULL)
    {
        int x = atoi(a);
        if(x < 0 || x > 255)
        {
            printf("Invalid IP address");
            return 0;
        }
        a = strtok(NULL,".");
    }
    printf("Valid IP address");
    return 0;
}
