#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {


    int count[6]={0},i=0;
    int arr[8]={7,5,6,9,6,7,10,7};
    int max=0;

   for(i = 0; i< 8;++i)
   {
     //for numebr = 5 => 5-5 count of 5 will be print in index 0 ..
       count[arr[i]-5]++;

   }

    printf("Number with max count is = %d",count[1]);

   
    return 0;
}

