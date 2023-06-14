#include <stdio.h>
#include <math.h>
int main() {
//Check how much will be 0.01$ if is multply by 2, every day in a month

   int num;
   printf("Enter number:");
   scanf("%d",&num);

   for(int i=1;i<=num;i++)
   {
     //to print 2,4,6,8
      printf("%d ",i*2);
   }

    return 0;
}
