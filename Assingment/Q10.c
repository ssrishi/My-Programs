#include<stdio.h>
#include<math.h>
int main()
{
    float d,a,b,c,root1,root2;
    char i;
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b)-(4*a*c);
    switch(d>0)
    {
    case 1:
        root1 = ((-b + sqrt(d))/(2*a));
        root2 = ((-b - sqrt(d))/(2*a));
        printf("roots are real and distinct %.2f and %.2f",root1,root2);
        break;
    case 0:
        switch(d==0)
        {
        case 1:
            root1 = (-b/(2*a));
            root2 = (-b/(2*a));
            printf("Roots are equal %.2f and %.2f",root1,root2);
        case 0:
            root1 = ((-b + sqrt(-d))/(2*a));
            root2 = ((-b - sqrt(-d))/(2*a));
            printf("Roots are imaginary %.2fi and %.2fi",root1,root2);
            break;
        }
    }
    return 0;
}
