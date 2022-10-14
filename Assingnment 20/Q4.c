#include<stdio.h>
#include<stdlib.h>

int main()
{
    char n;
    printf("Welcome in today's class.\nToday we learn about POINTERS.");
    printf("\nPress enter to open next slide");
    n = getchar();
    fflush(stdin);
    if(n=='\n')
    {   
        printf("What is pointer?\n");
        printf("Answer: Pointer is a variable that contains address of another variable.");
    }
    return 0;
}