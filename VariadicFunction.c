#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double average(double n1,...)
{
  //Declaring pointer to the argument list
   va_list arg;
   double sum = 0.0;

  //Initializing argument to the list pointer
    va_start(arg,n1);
    for(int i =0;i < n1;++i)
    {
        sum += va_arg(arg,double );
    }

  //Ending argument list
    va_end(arg);
    return sum;
}

int main(){

    printf("Sum  = %.2fl", average(5.3,8.2,5.3,8.1,10.2));

    return 0;
}
