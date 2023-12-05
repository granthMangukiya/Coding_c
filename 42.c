#include <stdio.h>
int b = 34; // it is a global variable
int ret()
{
    return 43*3;
}
int func1(int b1)
{
    static int myvar = ret();
    printf("The value of my var is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 * myvar;
}
int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func 1 is %d\n", val);
    return 0;
}