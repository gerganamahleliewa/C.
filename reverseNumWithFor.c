#include <stdio.h>
#include <math.h>
int main() {
//Check how much will be 0.01$ if is multply by 2, every day in a month

   int num;
   printf("Enter number:");
   scanf("%d",&num);

   for(int i=1;i<=num;++i)
   {
       printf("%d ",i);
   }
   printf("\n");
   for(int j=num;j>0;--j)
   {
       printf("%d ",j);
   }
    return 0;
}
