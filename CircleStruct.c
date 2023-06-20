#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//create struct for Point
typedef struct{

    int x;
    int y;
}Point;
//create struct for Circle
typedef struct{
//create a variable from data type Point
    Point center;
    double radius;
}Circle;

int main() {
//print result
    Point p1 = {5,9};
    Circle c1;
    c1.radius = 5.3;
    c1.center = p1;
    printf("%d ",c1.center.y);



    return 0;
}


