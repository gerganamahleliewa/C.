#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5

int main() {

  //create array
   int arr[5]={1,5,9,6,3};
  //maxsum
   int maxSum=arr[0] + arr[1];

   for(int i=1;i < 4;++i)
   {
       if(maxSum <= arr[i] + arr[i+1])
       {
           maxSum = arr[i] + arr[i+1];
       }
   }
    printf("Max Sum = %d",maxSum);


    return 0;
}
