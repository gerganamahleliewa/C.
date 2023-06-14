#include <stdio.h>
#include <math.h>
int main() {

   int num,pow,i,result=1;
   printf("Enter number:");
   scanf("%d %d",&num,&pow);

   for( i=1;i<=pow;++i)
   {
     //1*2->2*2->4*2
       result*=num;
   }
   printf("Result=%d",result);
    return 0;
}
