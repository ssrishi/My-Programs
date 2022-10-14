#include<stdio.h>
int length(char *);
int main()
{
    int len;
    char str[20]={"Rishi sharma"};
    len = length(str);
    printf("lenght of string = %d",len);
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}