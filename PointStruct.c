#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
struct point{
    int x;
    int y;
  //struct variable
}p1;


int main() {

  //input from the user
    printf("Enter x:");
    scanf("%d",&p1.x);

    printf("Enter y:");
    scanf("%d",&p1.y);
//print coordinate
    printf("Coordinates of point A(%d,%d)",p1.x,p1.y);


    return 0;
}
