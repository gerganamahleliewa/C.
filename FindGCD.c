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

int findGCD(int a, int b)
{
    while(a != b)
    {
        if( a > b)
        {
            return findGCD(a-b,b);
        }
        else
            return findGCD(a,b-a);

    }
    return a;
}

int main(){

    printf("%d", findGCD(5,2));



    return 0;
}
