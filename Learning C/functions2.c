/*
    Write a program in C to show the simple structure of a function
*/

#include <stdio.h>

void oddeven(int *input)
{
    int a;
    *input = *input % 2;
    
}

int main()
{
    int num;
    printf("Enter The number you want to check whether it is odd or even:\n");
    scanf("%d", &num);
    oddeven(&num);
    if (num==0)
    {
        printf("The Number Which You Have Entered Is even");
    }
    else
    {
        printf("The Number Which You Have Entered Is odd");
    }
    return 0;
}