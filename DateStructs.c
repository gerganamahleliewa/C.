#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
struct date{
    int day;
    int month;
    int year;
}d1;
//create function to input day,month and year
void input()
{
    printf("Enter day:");
    scanf("%d",&d1.day);

    printf("Enter month:");
    scanf("%d",&d1.month);

    printf("Enter year:");
    scanf("%d",&d1.year);
}

//create funstion to print date
void printDate()
{
    printf("%d/%d/%d",d1.day,d1.month,d1.year);
}

//create function to print next date
void printNextDate()
{
    d1.day++;
    if(d1.day > 31)
    {
        d1.day = 1;
        d1.month++;
        if(d1.month > 12)
        {
            d1.month = 1;
            d1.year++;
        }
    }
    printf("\nNext date: %d/%d/%d\n",d1.day,d1.month,d1.year);
}


int main() {
//call functions
    input();
    printDate();

    printNextDate();

    return 0;
}



