#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Harry";
    char s2[] = "Ravi";
    char s3[54];
    printf("The strcmp for s1, s2 is %d", strcmp(s1,s2));

    // puts(strcat(s1,s2));
    // printf("The Length of s1 is %d\n", strlen(s1));
    // printf("The Length of s2 is %d\n", strlen(s2));
    // printf("The reverse of s1 is :");
    // puts(strrev(s1));
    // printf("The reverse of s2 is :");
    // puts(strrev(s2));
    // strcpy(s3, strcat(s1, s2));
    // puts(s2);
    return 0;
}