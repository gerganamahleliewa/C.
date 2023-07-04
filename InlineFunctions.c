#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>
#include <setjmp.h>
#include <stdarg.h>

//create static inline function
static inline int foo()
{
    return 5;
}

int main(){
//print result
    printf("%d",foo()) ;


    return 0;
}
