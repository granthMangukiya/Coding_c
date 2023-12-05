#include <stdio.h>

void addsub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;
}
int main()
{
    int a = 6, b = 12;
    printf("The original value of a is %d and b is %d\n", a, b);
    addsub(&a, &b);
    printf("addition of a an b is %d and subtraction is %d", a, b);
    return 0;
}