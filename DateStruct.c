#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
struct date{
    int day;
    int month;
    int year;
  //struct variable
}d1;

int main() {

    printf("Enter day:");
    scanf("%d",&d1.day);

    printf("Enter month:");
    scanf("%d",&d1.month);

    printf("Enter year:");
    scanf("%d",&d1.year);
//print resut
    printf("%d/%d/%d",d1.day,d1.month,d1.year);

    return 0;
}



