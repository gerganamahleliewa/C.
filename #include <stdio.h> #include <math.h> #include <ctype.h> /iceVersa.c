#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
void FirstPrint(int number);
void SecondPrint(int num);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);
  
//call the functions
    SecondPrint(n);
    FirstPrint(n);



    return 0;
}
void FirstPrint(int number)
{
    if(number >= 2)
    {
      //print 1,2,3,4
        FirstPrint(number-1);
        printf("%d ",number);


    }
}
void SecondPrint(int num)
{
    if(num == 1)
    {
        printf("%d ",num);
    }
    if(num >= 2)
    {
//printf 4,3,2,1
        printf("%d ",num);
        SecondPrint(num-1);
    }
}



