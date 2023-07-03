#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>
#include <setjmp.h>

//jump buffer
jmp_buf buf;

void error_recovery()
{
    printf("function\n");
    longjmp(buf,1);
}

int main() {
  
    while (1) {
        if (setjmp(buf)) {
            printf("back in main\n");
            break;
        }
        else {
            error_recovery();
        }
    }
    return 0;
}

