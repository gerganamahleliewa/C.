#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaartion function
void LowerUpperSequence(int total,char alpha);

int main() {
  
//call function
    LowerUpperSequence(3,'a');


    return 0;
}

void LowerUpperSequence(int total,char alpha)
{
    if(total >= 1)
    {
      //first print lower case
        printf("%c",alpha);
        LowerUpperSequence(total-1,alpha);
      // after function stop print Upper case 
        printf("%c",toupper(alpha));
    }

}
