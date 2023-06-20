#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {


    int count[20]={0},i=0;
    int arr[20]={0,0,0,0,0,1,1,1,2,3,3,3,4,5,6,6,6,9,9,9};
    int max=0;

   for(i = 0; i< 20;++i)
   {
     //count every elements in arr
       count[arr[i]]++;

   }


    for(i = 1; i< 20;++i)
    {
      //search element with max count
        if(count[i] > count[max])
        {
            max=i;
        }

    }
    printf("Number with max count is = %d",max);




    return 0;
}
