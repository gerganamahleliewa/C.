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

int LargestNumber(int n,...)
{
    va_list  arg;

    va_start(arg,n);

    int max = va_arg(arg,int);//current variable and point to the next one

    for(int i = 0; i < n;++i)
    {
        int temp = va_arg(arg,int );
        max = temp > max? temp:max;
    }

    va_end(arg);
  ///return mac element
    return max;
}
int main(){

    printf("Max element is  = %d", LargestNumber(2,5,1));


    return 0;
}
