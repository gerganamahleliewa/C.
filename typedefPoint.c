#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct
typedef struct{
    int x;
    int y;
}Point;

//create function and print coordinate
void printPoint(Point p1)
{
    printf("A(%d,%d)",p1.x,p1.y);
}

//create function with struct type to return struct variable
Point inputPoint()
{
    Point p1;
    printf("Enter x:");
    scanf("%d",&p1.x);

    printf("Enter y:");
    scanf("%d",&p1.y);
    return p1;

}
int main() {

//create struct variable and print function
     Point p1 = inputPoint();
     printPoint(p1);
    return 0;
}

