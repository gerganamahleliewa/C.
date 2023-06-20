#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

int CheckOccurence(int number,int digit);

int main() {


   int n;

    printf("Enter number:");
    scanf("%d",&n);


    printf("%d",CheckOccurence(n,2));

    return 0;
}
int CheckOccurence(int number,int digit)
{
int count;
    while(number != 0 )
    {
        int rem = number % 10;

//if units are not equal to digit is odd
       if(rem != digit) {
           return 0;
       }
       else//rem == digit
           return 1;//is even

    }
    count = CheckOccurence(number / 10, digit);
    return count;
}



