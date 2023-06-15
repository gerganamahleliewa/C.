#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create function to check in number and if there is a number less than digits and we print average sum of them

float Average(int num,int digits)
{
    int rem,sum=0,count=0;
    float avg;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
      //check if 3<3 -> false , if(2<3 ->true =>0+3...
        if(rem<digits)
        {
            ++count;
            sum+=rem;
        }

       

    }
  
    avg=sum/(float)count;

    return avg;
}

int main() {

    printf("%.2f", Average(123,3));
    return 0;

}
