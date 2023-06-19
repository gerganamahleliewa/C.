#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int fibonacci(int number);

int main() {

    int num;

    printf("Enter number of fibonacci:");
    scanf("%d",&num);
    
    
   for(int i = 0 ; i < 7;++i)
   {
       printf("%d ", fibonacci(i));
   }
    return 0;
}
int fibonacci(int number)
{
    if(number==0)
         return 0;
    if(number==1) {
        return 1;
    }
  //(2-1) + 0 -> 0 1 1 -> (3-1)+1-> 0 1 1 2 .....
    return fibonacci(number-1) + fibonacci(number-2);
}

