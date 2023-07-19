#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {

   int arr[5];
int sort;
//enter values
   for(int i = 0;i<5;++i) {

       printf("Enter number:");
       scanf("%d",&arr[i]);
   }
//check
   for(int i=0;i<5;++i)
   {
       for(int j=i+1;j<5;++j) 
       {
            if (arr[i] > arr[j]) {
               sort = arr[i];
               arr[i] = arr[j];
               arr[j] = sort;
             }
       }
   }
//print sorted array
   for(int i=0;i<5;++i)
   {
       printf("%d ",arr[i]);
   }

    return 0;
}
