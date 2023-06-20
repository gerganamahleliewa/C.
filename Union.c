#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
struct Point
{
    int x;
    int y;
}p1;

//create union 
union point
{
    int x;
    int y;
}P1;

int main() {

//will be print A(4,7)
    p1.x=4;
    p1.y=7;
    printf("A(%d;%d)\n",p1.x,p1.y);

    P1.x=9;
  //will be print A(9,9)
    printf("A(%d;%d)",P1.x,P1.y);



    return 0;
}



