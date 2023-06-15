#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {


   int arr[5];
   
   int maxElement=arr[0];

   for(int i = 0; i < 5 ; ++i)
   {
     //enter element in array
       printf("Enter number:");
       scanf("%d",&arr[i]);

       if( maxElement <= arr[i] )
       {
           maxElement = arr[i] ;
       }

   }
    printf("Max number is : %d  ", maxElement );

    return 0;

}
