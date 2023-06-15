#include <stdio.h>
#include <math.h>
#include <ctype.h>

// create function to return sum of divisor 

int sumOfDivisor(int number)
{
    int sum = 0;

    for(int i = 1;i <= number; ++i)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main() {


    printf("Sum = %d ",sumOfDivisor(15));

    return 0;

}
