#include <stdio.h>
#include <math.h>
int main() {

   int num,rem,sum=0,i=1;
   printf("Enter number:");
   scanf("%d",&num);


//Convert decimal to hexadecimal


   while(num!=0)
   {
       //remainder of decimal number
       rem=num%16;
       // divided num by 16
       num/=16;
       //sum of remainder multiply to 1,10.100...
       sum+=rem*i;
       i*=10;

   }
    printf("%d",sum);

    return 0;
}
