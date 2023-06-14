#include <stdio.h>
#include <math.h>
int main() {
  
//Check how much will be 0.01$ if is multply by 2, every day in a month

   int total_quick= 1000000;
   float total_amount=0.01;//Day 1

   for(int i=0;i<30;++i)
   {
       total_amount*=2;
   }
   printf("TotalAmount= %.2f\n",total_amount);
    return 0;
}
