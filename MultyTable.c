#include <stdio.h>
#include <math.h>
int main() {
//Check how much will be 0.01$ if is multply by 2, every day in a month

   int num,sum;
   printf("Enter number:");
   scanf("%d",&num);

   for(int i=1;i<=10;++i)
   {
      printf("%d*%d=%d\n",num,i,num*i);
   }

    return 0;
}
