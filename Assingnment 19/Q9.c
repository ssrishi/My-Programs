#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,fact=1;
    char str[10][20]={"rishi123","sharma901","qwertyzebra","123helloji","rishisharma","hello123sharma","mainkyakarrhahoonji","mysirg","inueron","juststudy"},username[20];
    printf("Enter a username to find factorial: ");
    gets(username);
    for(i=0;i<10;i++)
    {
        if(strcmp(str[i],username)==0)
        {
            printf("Enter a number: ");
            scanf("%d",&n);
            while(n>0)
            {
                fact*=n;
                n--;
            }
            printf("Your factorial is %d",fact);
            break;
        }
    }
    if(i==10)
        printf("You entered the wrong username.");
    return 0;
    
}

