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
//check
   for(int i = 0;i < SIZE;++i)
   {
       for(int j = 0 ;j < SIZE ;++j) {
//if i=0 and j=0 -> 1,5,6,3 -> 1==1 , 1==5?, 1==6?..5==6?, 5==3? ...
           if(i == j)
               continue;
           if (arr[i] == arr[j]) 
           {
               sort=1;
               break;
           }
       }
       if(sort!=1)
       {
           printf("Unique numbers are:%d \n",arr[i]);
           ++count;
       }
       sort=0;
   }




    return 0;
}

