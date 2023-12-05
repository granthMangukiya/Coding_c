#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    int num;
    printf("Please enter the number upto which you want to find the fibonacci series\n");
    scanf("%d", &num);
    printf("The fabonacci series upto %d is:\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", fib(i));
    }
    return 0;
}
