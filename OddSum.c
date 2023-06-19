#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int OddSum(int number);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

  //print result
    printf("%d", OddSum(n));

    return 0;
}

int OddSum(int number)
{
    while(number > 0)
    {
        int rem = number % 10;
        number /= 10;
    //return 1 if sum of digits i odd and 0 if it is even
       return  (OddSum(number) + rem) % 2 ? 1 : 0 ;

    }
}


