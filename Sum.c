#include <stdio.h>
#include <math.h>
int main() {
//Check how much will be 0.01$ if is multply by 2, every day in a month

   int num,sum=0;
   printf("Enter number:");
   scanf("%d",&num);

   for(int i=1;i<=num;++i)
   {
       sum+=i;
   }
   printf("Sum=%d",sum);
    return 0;
}
