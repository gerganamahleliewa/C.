#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5

int main() {

   int arr[SIZE];
   int sort=0,count=0;

  //Enter values
   for(int i = 0;i < SIZE;++i) {

       printf("Enter number:");
       scanf("%d",&arr[i]);
   }
//check if there are unique or not 
 //they are unique when 1,2,3,4,5 and they are not unique when 1,2,1,3,3
   for(int i = 0;i < SIZE;++i)
   {
       for(int j = i+1;j < SIZE ;++j) {
           if (arr[i] == arr[j]) {

               sort=1;
             //how much are equal elements
               ++count;
           }
       }
   }

  
   if(sort==0)
   {
       printf("Unique!\n");
       printf("%d",SIZE-count);
   }
   else if(sort==1)
   {
       printf("Not!");
   }


    return 0;
}

