#include <stdio.h>
#include <math.h>

//create function to find max numebr
void maxBetween3(int num1,int num2,int num3)
{
    if(num1>num2 && num1>num3)
    {
        printf("%d is max number!",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is max number!",num2);
    }
    else
    {
        printf("%d is max number!",num3);
    }
}

int main() {
//enter number from user
    int number1,number2,number3;
    printf("Enter  three numbers:");
    scanf("%d %d %d",&number1,&number2,&number3);
  //call function
    maxBetween3(number1,number2,number3);

    return 0;
}
