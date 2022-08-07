#include<stdio.h>
#include<conio.h>
int main()
{
    int eng, math, hindi, sst, gsc;
    printf("Enter marks of these subject(english, maths, hindi, social studies, science): ");
    scanf("%d %d %d %d %d",&eng,&math,&hindi,&sst,&gsc);
    if (eng >=33)
        printf("You passed in english.\n");
    else
        printf("You failed in english.\n");
    if (math>=33)
        printf("You passed in maths.\n");
    else
        printf("You failed in maths.\n");
    if (hindi>=33)
        printf("You passed in hindi.\n");
    else
        printf("You failed in hindi.\n");
    if (sst>=33)
        printf("You passed in sst.\n");
    else
        printf("You failed in sst.\n");
    if (gsc>=33)
        printf("You passed in general science.\n");
    else
        printf("You failed in general science.\n");
    return 0;
}
