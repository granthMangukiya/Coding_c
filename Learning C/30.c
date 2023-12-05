#include <stdio.h>
int main()
{
    int a, i, j, rows;
    printf("Enter your choice:\n 1. triangular star pattern\n 2.reverse triangular star patter\n 3. both of them\n");
    scanf("%d", &a);

    printf("how many rows do you want?\n");
    scanf("%d", &rows);

    switch (a)
    {
    case 1:
        printf("Here is your triangular star pattern\n\n");
        for ( i = 1; i <= rows; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        break;
        case 2:
        printf("Here is your reverse triangular star pattern\n\n");
        for ( i = 1; i <= rows; i++)
        {
            for ( j = i; j <= rows; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        break;

        case 3:
        printf("Here is your triangular star pattern\n\n");
        for ( i = 1; i <= rows; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("Here is your reverse triangular star pattern\n\n");
        for ( i = 1; i <= rows; i++)
        {
            for ( j = i; j <= rows; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    default:
        break;
    }
    return 0;
}