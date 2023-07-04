#include <stdio.h>
#include <math.h>
#define SQUARE(x) printf("Square of %d = %d\n",x,(x) * (x))
#define CUBE(x)  printf("Cube of %d = %d\n",x,(x) * (x) * (x))


int main(){

    int x;
    printf("Enter x:");
    scanf("%d",&x);
  
    SQUARE(x);//print square of x
    CUBE(x);//print cube of x


  return 0;
}
