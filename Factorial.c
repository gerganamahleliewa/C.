#include <stdio.h>
#include <math.h>

//create function
void factorial(unsigned num)
{
    int sum=1;
    for(int i=1;i<=num;++i)
    {
        sum*=i;
    }
    printf("factorial of number %u is %d",num,sum);
}


int main() {
  //call function
    factorial(5);

    return 0;
}
