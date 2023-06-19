#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int EvenSum(int number);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);
  
//print result
    printf("%d", EvenSum(n));

    return 0;
}

int EvenSum(int number)
{
    while(number > 0)
    {
   //search sum of digiits
        int rem = number % 10;
        number /= 10;
       // return EvenSum(number) + rem;
      //if sum of digits is % by 2 is even else odd
        if((EvenSum(number) + rem) % 2 == 0)
            return 1;
        else
            return 0;
    }
}




