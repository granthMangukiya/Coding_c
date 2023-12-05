#include <stdio.h>

int main()
{
    printf("Let's learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("address of some garbage value is %p\n", ptr2);
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The value of a is %p\n", *ptra);
    return 0;
}
