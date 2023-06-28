/*

        author : granth Mangukiya
        purpose : test for if else statements
        date : 28/06/2023

        Question :  Write a C program to accept two integers and check whether they are equal or not.

*/



#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Equating numbers\n");
    printf("enter number 1\n");
    scanf("%d", &num1);
    printf("enter number 2\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("number 1 and number 2 are equal\n");
    }
    else
    {
        printf("number 1 and number 2 are not equal\n");
    }
    
    
    return 0;
}