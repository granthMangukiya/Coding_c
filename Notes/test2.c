/*

        Author : Granth Mangukiya
        Purpose : second test for if else statement
        Date : 28/06/2023

        Question : Write a C program to check whether a given number is even or odd.

*/


#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter a number which you want to check whether it is odd or even\n");
    scanf("%d", &num1);
    num2 = num1 % 2;

    if (num2==0)
    {
        printf("the number that you have entered is an even number\n");
    }
    else
    {
        printf("the number which you have entered is an odd number\n");
    }
    
    return 0;
}