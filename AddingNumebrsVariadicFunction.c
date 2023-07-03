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

int AddingNumbers(int n,...)
{
    int sum = 0;
  
//declaring argument to the list pointer
    va_list  arg;

    va_start(arg,n);

    for(int i = 0; i < n;++i)
    {
      //sum of elements
       sum += va_arg(arg,int );

    }

    va_end(arg);

    return sum;
}
int main(){

    printf("5 + 1 = %d", AddingNumbers(2,5,1));


    return 0;
}
