#include<stdio.h>
int main()
{
    int i;
    char str1[30],str2[30];
    printf("Enter your string: ");
    fgets(str1,30,stdin);
    for(i=0;str1[i]!='\n';i++)
        str2[i]=str1[i];
    printf("%s",str2);
    return 0;
}
