#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    time_t Cur_time;
    char* cur_t_string;
    Cur_time= time(NULL);
    if (Cur_time==((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to get current time and date.\n");
        exit(EXIT_FAILURE);
    }
    cur_t_string = ctime(&Cur_time);
    if (cur_t_string==NULL)
    {
        (void) fprintf(stderr, "Failure to convert current fate and tikme.\n");
        exit(EXIT_FAILURE);
    }
    (void) printf("\nyour current date and time is: %s \n", cur_t_string);
    exit(EXIT_SUCCESS);
     
    return 0;
}