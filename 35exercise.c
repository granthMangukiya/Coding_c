#include <stdio.h>
#include<string.h>

int main()
{
    char s1[10];
    char s2[10];

    printf("enter name of first person:\n");
    scanf("%s",&s1);
    printf("enter name of second person:\n");
    scanf("%s",&s2);

    printf("%s and %s are best friends", s1,s2);
    return 0;
}