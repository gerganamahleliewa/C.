#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>


int main() {

   int number,sum = 0;

for(int i = 0;i < 5;++i) {
    printf("Enter number:");
    scanf("%d", &number);
  
//if number is less than zero is jump
    if (number < 0) {
        goto jump;
    }
    
    sum +=number;
}

    jump:
    printf("Sum = %d",sum);

    return 0;
}

