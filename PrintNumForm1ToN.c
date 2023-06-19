#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
void FirstPrint(int number);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

//call function
    FirstPrint(n);



    return 0;
}

void FirstPrint(int number)
{
    if(number >= 1)
    {
      //printf number from 1 to n
        FirstPrint(number-1);
        printf("%d ",number);

    }
}


