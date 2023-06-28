/*

        Name : Granth Mangukiya
        Purpose : goto statements
        Date : 28/06/2023

*/

#include <stdio.h>

int main()
{  
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter a number. enter 0 for exit");
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    
    return 0;
}