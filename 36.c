#include <stdio.h>
#include <string.h>

void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;

    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,67};
       for (int i = 0; i < 7; i++)
    {
        printf("The Value Of The Element %d is %d\n", i, arr[i]);
    }
    printf("\n");
    printf("After Reversing The Array, \n");
    printf("\n");

    arrayrev(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("The Value Of The Element %d is %d\n", i, arr[i]);
    }
    
    return 0;
}