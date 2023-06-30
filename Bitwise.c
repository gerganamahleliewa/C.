#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>

//convert from decimal to binary
int DecimalToBinary(int n1)
{

    int i= 1,sum=0;

    while (n1 != 0)
    {
        int rem  = n1%2;
        n1/=2;
        sum += rem *i;
        i*=10;

    }
    return sum;
}
int DecimalToBinary2(int n2)
{

    int i= 1,sum=0;

    while (n2 != 0)
    {
        int rem  = n2%2;
        n2/=2;
        sum += rem *i;
        i*=10;

    }
    return sum;
}

int main() {

    int num1,num2;
    printf("Enter number:");
    scanf("%d",&num1);

    printf("Enter number:");
    scanf("%d",&num2);


    printf("~Number1 = %d\n",DecimalToBinary(~num1));
    printf("~Number2 = %d\n",DecimalToBinary2(~num2));
    printf("Number1 & Number2 = %d\n", DecimalToBinary(num1) & DecimalToBinary2(num2));
    printf("Number1 | Number2 = %d\n", DecimalToBinary(num1) | DecimalToBinary2(num2));
    printf("Number1 ^ Number2 = %d\n", DecimalToBinary(num1) ^ DecimalToBinary2(num2));
    printf("Number1<< = %d\n",DecimalToBinary(num1<<2));
    printf("Number2<< = %d\n",DecimalToBinary2(num2<<2));






    return 0;
}

