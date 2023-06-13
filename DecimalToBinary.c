#include <stdio.h>
#include <math.h>
int main() {

   int num,rem,sum=0,i=1;
   printf("Enter number:");
   scanf("%d",&num);

   while(num!=0)
   {
       rem=(num%2);
       num/=2;
       sum+=rem*i;
       i*=10;
   }

    printf("%d",sum);

    return 0;
}
