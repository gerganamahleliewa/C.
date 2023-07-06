#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



int main(){

    time_t curr_time;
    char *current;
    curr_time = time(NULL);

    if(curr_time ==((time_t) - 1))
    {
        fprintf(stderr,"Failed!");
        exit(EXIT_FAILURE);
    }
    current = ctime(&curr_time);
    if(current == NULL)
    {
        fprintf(stderr,"Something wrong!");
        exit(EXIT_FAILURE);
    }
    printf("Current time : %s",current);


    return 0;
}
