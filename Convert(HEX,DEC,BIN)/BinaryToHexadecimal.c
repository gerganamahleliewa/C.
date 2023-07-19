#include <stdio.h>
#include <math.h>
int main() {

   int num;
   int rem,sum=0,i=1;
   printf("Enter binary number:");
   scanf("%d",&num);

//check end of number
 //Convert binary number to decimal number
while(num!=0)
{
  //remainder of number
    rem=num%10;
    num/=10;
  //sum remainder multiply by 1,2,4...
    sum+=rem*i;
    i*=2;
}
printf("%d",sum);
  //convert from decimal to hexdecimal
printf("\nNumber in hex%x",sum);
    return 0;
}
