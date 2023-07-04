#include <stdio.h>
#include <math.h>

//define macro
#define PI 3.14
#define CIRCLE_AREA(x)  ((PI) * (x) * (x));


int main(){
   int res =  CIRCLE_AREA(5);
    printf("%d",res);

  return 0;
}
