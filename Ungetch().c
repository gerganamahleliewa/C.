#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>
#include <setjmp.h>



int main() {

    char ch = 0;
    while (isspace(ch = (char)getchar()));

    ungetc(ch,stdin);

    printf("char is %c\n",getchar());

    return 0;
}

