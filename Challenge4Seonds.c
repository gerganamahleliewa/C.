#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main(){

    time_t now;
    time(&now);
    struct tm beg_month;

    beg_month = *localtime(&now);
    beg_month.tm_hour = 0;
    beg_month.tm_min = 0;
    beg_month.tm_sec = 0;
    beg_month.tm_mday = 1;
  
//print second since begging of the month
    double sec = difftime(now, mktime(&beg_month));
    printf("%.2lf seconds passed since the beginning of the month. ",sec);

    return 0;
}
