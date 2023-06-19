#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int SumOfDigits(int number);

int main() {

    int num;

    printf("Enter number:");
    scanf("%d",&num);

//print result
    printf("Result = %d", SumOfDigits(num));


    return 0;
}

int SumOfDigits(int number)
{
    while(number>0)
    {
        int rem =number%10;
        number/=10;
        return SumOfDigits(number)+rem;
    }


}
