#include <stdio.h>

int main()
{
    int subject;

    printf("from maths and science in which exam you have passed \n 1. Maths & science\n 2. science\n 3. maths \n");
    printf("write 1 for maths and science both,\n2 for only maths and,\n 3 for only science\n");
    scanf("%d", &subject);

   if (subject==1)
   {
    printf("you are gifted 45 rupees");
   }
    else if (subject==2)
    {
        printf("you are gifted 15 rupees");
    }
    else if (subject == 3)
    {
        printf("you are gifted 15 rupees");
    }
    
    

   return 0
   
   ;
}
