#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if ((a>=65)&&(a<=90))
        printf("Alphabet is in upper case");
    else if((a>=97)&&(a<=122))
        printf("Alphabet is in lower case");
    else
        printf("Invalid character");
    return 0;
}
