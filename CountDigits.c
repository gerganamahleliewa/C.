#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int countOfDigits(int number);

int main() {

    int num;

    printf("Enter number:");
    scanf("%d",&num);
//print result
printf("Count = %d", countOfDigits(num));


    return 0;
}

int countOfDigits(int number)
{
  //check count of digits
    while(number>0)
    {
        int rem=number%10;
        number/=10;
     //12=> 12/10 + 1...
        return countOfDigits(number)+1;
    }
}
