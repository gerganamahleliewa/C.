#include <stdio.h>
#include <math.h>
#include <ctype.h>

// check if sum of input number is equal to number it is Perfect number otherwise it is not Perfect number
int sumOfDivisor(int number)
{
    int sum = 0;

    for(int i = 1;i < number; ++i)
    {
        if(number % i == 0)
        {
            sum += i;
        }


    }
    if(sum == number)
    {
        printf("Perfect Number!\n");
    }
    else
    {
        printf("Not Perfect Number!\n");
    }

    return sum;
}

int main() {


    printf("Sum = %d ",sumOfDivisor(6));

    return 0;

}
