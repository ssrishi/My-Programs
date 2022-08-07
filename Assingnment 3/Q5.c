#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num, i=0;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    num = n;
    if (n>0)
    {
        n = n/10;
        i++;
        if (n>0)
        {
            n = n/10;
            i++;
            if (n>0)
            {
                n = n/10;
                i++;
            }
        }
    }
    if ((i==3) && (n==0))
        printf("%d is three digit number",num);
    else
        printf("%d is not three digit number",num);
    return 0;
}
