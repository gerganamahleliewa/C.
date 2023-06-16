#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create function
int Max(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }else{
        return num2;
    }
}

int main() {

    int a=5,b=9;
  
    int *ptr=&a;
    int *p=&b;
  //print value with pointers
    printf("%d", Max(*ptr,*p));



    return 0;
}
