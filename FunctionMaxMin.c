#include <stdio.h>
#include <math.h>

//create function
void printMinMax(int num1,int num2)
{
    if(num1>num2)
    {
        printf("%d is max number!",num1);
    }
    else{
        printf("%d is max number!",num2);
    }
}

int main() {

//call function
    printMinMax(8,3);

    return 0;
}
