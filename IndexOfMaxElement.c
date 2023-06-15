#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {


   int arr[5];

   int maxElement=arr[0];
   int index;

   for(int i = 0; i < 5 ; ++i)
   {
       printf("Enter number:");
       scanf("%d",&arr[i]);

       if( maxElement < arr[i] )
       {
           maxElement = arr[i] ;
       }
     
       if(arr[i] > arr[index])
       {
           index = i;
       }

   }
    printf("Max number is : %d  ", maxElement );
    printf("\nIndex is = %d",index);


    return 0;

}
