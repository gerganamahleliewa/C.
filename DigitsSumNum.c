#include <stdio.h>
#include <math.h>
int main() {

int num,sumOdd=0,tens,sumEven;
    printf("Enter number:");
    scanf("%d",&num);

   while(num>0)
   {
     //search if remeinder of number is odd or even
       tens=num%10;
       num/=10;
       if(tens%2==0)
       {
           sumEven+=tens;

       }
       else
       {
           sumOdd+=tens;
       }

   }
   
   printf("SumEven=%d",sumEven);
   printf("SumOdd=%d\n",sumOdd);

    return 0;
}
