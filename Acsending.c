#include <stdio.h>
#include <math.h>

int main() {

   int size,currentValue,previousValue=0,flag=0;

   printf("Enter size:");
   scanf("%d",&size);

   do
   {
       printf("Enter value:");
       scanf("%d",&currentValue);
       
//check if value is smaller or equal to zero
       if(currentValue<=previousValue)
       {
           //if flag===1 so it is NOT Ascending
           flag=1;
       }
       //0=value-> value=nextvalue....
       previousValue=currentValue;
       size--;
     
   }while(size>0);


   if(flag==0)
   {
       printf("It is Ascending!");
   }
   else if(flag==1)
   {
       printf("It is NOT Ascending!");
   }
    return 0;
}
