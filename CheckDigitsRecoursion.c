#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int CheckDigit(int number);

int main() {


   int n;

    printf("Enter number:");
    scanf("%d",&n);

//print result
    printf("%d",CheckDigit(n));

    return 0;
}

int CheckDigit(int number) {
  // find units
    int units = number % 10;
  //find tens
    int tens = (number / 100) / 10;
    int sort;

    if (number < 100)
        if (tens < units)
            return 1;
        else
            return -1;
//example: 1256/10 -> 125/10 -> 12/10 -> 1 that will be return 1
      sort = CheckDigit( number / 10);

      if(sort == 1 && tens < units)
          return 1;
      if( sort == -1 && tens > units)
          return -1;
     return 0;

}
