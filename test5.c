#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("number:%d\n", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("The sum is :\n%d\n", sum);

    avg = sum/10.0;
    printf("The average is: %f", avg);

    return 0;
}
