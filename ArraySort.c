#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main() {

   int arr[5];
int sort=0;
//input values in array
   for(int i = 0;i<5;++i) {

       printf("Enter number:");
       scanf("%d",&arr[i]);
   }

  //check if they are sort or not
   for(int i=1;i<5;++i)
   {
       if(arr[i-1]>arr[i])
       {
           sort=2;
           break;
       }
       if(arr[i-1] <= arr[i])
       {
           sort=1;
       }
   }
  //print result
   if(sort==1)
   {
       printf("It is sorted!");
   }
   else if(sort==2)
   {
       printf("Not sorted!");
   }

    return 0;
}

