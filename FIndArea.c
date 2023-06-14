#include <stdio.h>
#include <math.h>

//create function
float findAreaOfRectangle(float height,float width)
{
    float area;
    area=height*width;
    return area;
}

int main() {
    float height, width;
    printf("Enter two numbers:");
    scanf("%f %f",&height,&width);
  
//call funstion and print area
    printf("Area=%.2f",findAreaOfRectangle(height,width));


    return 0;
}
