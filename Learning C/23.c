#include <stdio.h>

int main()
{
    int marks[2][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}};
    // marks[0] = 34;

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array:\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value of %d %d element of the array is %d\n", i, j, marks[i][j]);
        }
    }

    // printf("marks of student 1 is: %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 24;
    // marks[3] = 34;
    // printf("marks of student 1 is: %d\n", marks[0]);

    return 0;
}
