#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>



int main() {

    double _Complex cx = 2.1+3.2*I;
    double complex cy = 4+6*I;
    printf("Cx= %.2f + %.2fi", creal(cx), cimag(cx));
  
//sum of complex number
    double complex sum = cx*cy;
    printf("\nSum = %.f+%.fi", creal(sum), cimag(sum));
  
//power of real and imag part of complex number
    printf("\nPower of cx = %.2f^%.2fi", pow(creal(cx),2), pow(cimag(cx),2));
    return 0;
}

