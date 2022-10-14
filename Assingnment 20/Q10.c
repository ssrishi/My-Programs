#include<stdio.h>
void print_string_reverse(char *);
int main()
{
    char str[20]={"Rishi sharma"};
    print_string_reverse(str);
    return 0;
}
void print_string_reverse(char *p)
{
    int i,j;
    for(i=0;*(p+i);i++);
    for(j=i-1;i>=0;i--)
        printf("%c",*(p+i));
}