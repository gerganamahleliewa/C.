#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
void Total(int total,int num1,int num2);

int main() {

/*
   int n;

    printf("Enter number:");
    scanf("%d",&n);
*/

//call function
    Total(2,2,4);


    return 0;
}

void Total(int total,int num1,int num2)
{

    if(total >= 1)
    {
    //print num1 -> 22
        printf("%d",num1);
        Total(total-1,num1,num2);
        //print num2 44
        printf("%d",num2);
    }
    
}
