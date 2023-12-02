#include <stdio.h>

void square(int *input)
{
    *input = *input * *input;
}

int main()
{
    int num;
    printf("Enter The Number You Want Square of:\n");
    scanf("%d",&num);
    square(&num);
    printf("The Square Of your number is:\n%d", num);

    return 0;
}