#include<stdio.h>
#include<string.h>
int swap(char *,char *);
int main()
{
    char a[20]={"rishi sharma"},b[20]={"rahul sharma"};
    swap(a,b);
    printf("a=%s\n",a);
    printf("b=%s",b);
    return 0;
}
int swap(char *p,char *q)
{
    char t[20];
    strcpy(t,p);
    strcpy(p,q);
    strcpy(q,t);
    return 0;
}