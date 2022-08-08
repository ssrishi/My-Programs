#include<stdio.h>
int main()
{
    int j,n1,n2,s,digit,result=0,cube,count = 0,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    //looping between two digits;
    for(i=n1+1;i<n2;i++)
    {
        s=i;
        count = 0;
        //counting number of digit in number;
        while(i>0)
        {
            i=i/10;
            count++;
        }
        i=s;
    //find number is arm strong or not;
        result = 0;
        for(i;i>0;)
        {
            digit=i%10;
            cube = 1;
            for(j=1;j<=count;j++)
                {
                    cube=cube*digit;
                }
                result=result + cube;
                i=i/10;
        }
        if(result == s)
            printf("%d ",s);
        i=s;
    }
    return 0;
}

