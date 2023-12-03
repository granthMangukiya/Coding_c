#include <stdio.h>
#include<string.h>

int main()
{
    char str1[10];
    char str2[10];

    printf("enter name of first person:\n");
    scanf("%s",&str1);
    printf("enter name of second person:\n");
    scanf("%s",&str2);

    printf("%s and %s are best friends", str1,str2);
    return 0;
}