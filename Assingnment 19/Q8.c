#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,index1=-1,index2=-1,min_dist;
    char str[6][10]={"is","is","are","was","were","has"};
    char word1[10],word2[10];
    printf("Enter first word: ");
    gets(word1);
    printf("\nEnter 2nd word: ");
    gets(word2);
    for(i=0;i<=5;i++)
    {
        if(strcmp(str[i],word1)==0)
        {
            index1 = i;
        }
        if(strcmp(str[i],word2)==0)
            index2 = i;
    }
    min_dist = abs(index1 - index2);
    printf("The minimum distance between two words is %d",min_dist-1);
    return 0;
}
