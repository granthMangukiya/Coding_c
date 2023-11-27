#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("you have entered %d as your age\n", age);

    if (age>=18)
    {
        printf("you are eligible to vote\n");
    }
    else if (age<=10)
    {
        printf("as your age is not even more than 18 you cannot vote\n");
    }
    
    else
    {
        printf("you cannot vote\n");
    }
    
    return 0;
}
