#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
void Total(int total,char alpha1,char alpha2);

int main() {

/*
   int n;

    printf("Enter number:");
    scanf("%d",&n);
*/

//call function
    Total(2,'a','b');


    return 0;
}

void Total(int total,char alpha1,char alpha2)
{
    if(total >= 1)
    {
      // print aa
        printf("%c",alpha1);
      //stop function and return to alpha2
        Total(total-1,alpha1,alpha2);
      //print bb
        printf("%c",alpha2);
    }

}
