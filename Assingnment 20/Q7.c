#include<stdio.h>
int vowles_count(char *);
int main()
{
    int count;
    char str[20]={"qwertyzebra"};
    count=vowles_count(str);
    printf("vowels in string = %d",count);
    return 0;
}
int vowles_count(char *p)
{
    int i,count=0;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
            count++;
    }
    return count;
}