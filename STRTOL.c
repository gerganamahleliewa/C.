#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#define NDEBUG
#include <assert.h>
#include <complex.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdnoreturn.h>



int main(){

    char str[30]  ="1110011 This is test";
    char *end;
    printf("Number is = %ld\n", strtol(str,&end,10));
    printf("String part is  = %s", end);

    return 0;
}
