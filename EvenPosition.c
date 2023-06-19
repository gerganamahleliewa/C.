#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int EvenPosition(int num);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);


    printf("%d", EvenPosition(n));

    return 0;
}

int EvenPosition(int num)
{

    if( num < 10)// 1 digit number
    {
        return (num % 2 == 0)? 1 : 0;
    }

    if(num < 100)// 2 digit number
    {
        if((num % 10) % 2 == 0 && (num/10) % 2 == 1 )
            return 1;
        else
            return 0;
    }


        if((num % 10) % 2 == 0  && ((num % 100) / 10 ) % 2 == 1 )
          //return n position
            return EvenPosition( num / 100)  ;
        else
            return 0;


}

