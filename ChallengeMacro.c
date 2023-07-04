#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SUM(x,y) printf("Sum = %d",(x)+(y))


int main(){

    int x,y;
    printf("Enter x and y:");
    scanf("%d %d",&x,&y);
  //call macro and print result
    SUM(x,y);

  return 0;
}
