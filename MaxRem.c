#include <stdio.h>
#include <math.h>

void MaxDigit(int num1,int num2)
{
    int count=0,rem1,rem2,value1,value2;
    value1=num1/10;
    value2=num2/10;

    while(num1!=0 )
    {
        rem1=num1%10;
        value1;
        //check if number is 2 digits
        count++;

        if(count==2)
        {

            //does remainder is bigger than next number , 8>7
            if(rem1>value1)
            {
            }
            value1=rem1;
            printf("Max number in first number is %d!\n",value1);
            break;
        }

    }

//create loop for number2
    while(num2!=0 )
    {
        rem2=num2%10;
        value2;
        
        //check if number is 2 digits
        count++;

        if(count==2)
        {
            //does remainder is bigger than next number , 8>7
            if(rem2>value2)
            {
            }
            value2=rem2;
            printf("Max number in second number is %d!\n",value2);
            break;
        }
    }

}

int main() {
    MaxDigit(12,23);


    return 0;
}
