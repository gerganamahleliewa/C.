#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>


int factorial(int number);

int main() {

    printf("Result = %d",factorial(5));
    return 0;
}

int factorial(int number)
{
    while(number > 1) {

      return factorial(number-1) * number ;

     }
}
