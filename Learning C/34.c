#include <stdio.h>

void printstr(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char string[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    char string[34];
    gets(string);
    // printstr(string );
    printf("using printf: %s\n",string);
    printf("Using gets: %s\n", string);
    printf("Using puts:\n %s", string);

    return 0;
}