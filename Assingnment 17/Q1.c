#include <stdio.h>
int main() {
    char s[20];
    int i;
    fgets(s,20,stdin);
    for (i = 0; s[i] != '\n'; i++);
    
    printf("Length of the string: %d", i);
    return 0;
}