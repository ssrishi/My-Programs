#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if (a>=65 && a<=90)
        printf("Alphabet is in upper case");
    else if(a>=97 && a<=122)
        printf("Alphabet is in lower case");
    else if (a>=48 && a<=57)
        printf("It is a  digit");
    return 0;
}
