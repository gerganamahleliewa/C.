#include <stdio.h>
#include <math.h>

//create function to print if length = 3 to print 1.2.3 or 999 
long long int nineNumber(int length)
{
    long long int num=0;
    for(int i=0;i<length;++i)
    {
        if(length<=9)
        {
            printf("%d",i+1);

        }
        else if(length>10)
        {
            num=num*10+9;
            return num;
        }

    }

}

int main() {

   printf("%lld", nineNumber(5));

    return 0;

}
