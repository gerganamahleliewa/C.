#include <stdio.h>
#include <math.h>

//create function 
float findAverage(int num1,int num2,int num3)
{
   float sum,avg;
   sum=num1+num3+num2;
  //find average
   avg=sum/3.0;
   return avg;
}

int main() {

    int number1,number2,number3;
    printf("Enter  three numbers:");
    scanf("%d %d %d",&number1,&number2,&number3);
  
//call function and print result
    printf("Average=%.2f",findAverage(number1,number2,number3));

    return 0;
}
