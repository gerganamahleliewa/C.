#include <stdio.h>
#include <math.h>
//#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>
#include <stdarg.h>

int Sum(int number)
{
    int sum = 0;


    if(number == 1)
        return 1;
    else{
        sum = number + Sum(number - 1) ;

    }

    return sum;


}
int main(){


    printf("Sum = %d", Sum(7));

    return 0;
}
