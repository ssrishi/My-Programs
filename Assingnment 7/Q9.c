#include<stdio.h>
int main()
{
    int j,n,s,digit,result=0,cube,count = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=n;
    //counting number of digit in number;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    n=s;
    //find number is arm strong or not;
    for(n;n>0;)
    {
        digit = n%10;
        cube = 1;
        for(j=1;j<=count;j++)
            {
                cube=cube*digit;
            }
            result=result + cube;
            n=n/10;
    }
    if(result == s)
        printf("It is arm strong number");
    else
        printf("no");
    return 0;
}
