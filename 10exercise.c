#include <stdio.h>

int main()
{
    int subject;
    printf("The subject whose exams you have written are listed below: \n");
    printf("1. Maths\n2. Science\n3. Both Maths And Science\n");
    printf("enter the number which you have passes in:\n");
    scanf("%d", &subject);

    if (subject == 1)
    {
        printf("congratulations! you won 15 rupees");
    }
    else if (subject == 2)
    {
        printf("congratulations! you won 15 rupees");
    }
    else if (subject == 3)
    {
        printf("congratulations! you won 45 rupees");
    }
    else
    {
        printf("your input is invalid");
    }

    return 0;
}
