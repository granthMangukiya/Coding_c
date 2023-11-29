#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 1;
    int num3 = num1 + num2;
    int n;
    printf("Please enter the number upto which you want to find the fibbonacci series.\n");
    scanf("%d", &n);
    printf("The number is %d\n", num1);
    printf("The number is %d\n", num2);
    for (int i = 3; i <= n; i++)
    {
        printf("The number is %d\n", num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }

    return 0;
}
