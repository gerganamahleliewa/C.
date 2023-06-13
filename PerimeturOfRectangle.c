#include <stdio.h>
#include <stdlib.h>

int main()
{

double height, width;
double area;

printf("Enter height:");
scanf("%lf", &height);

printf("Enter width:");
scanf("%lf", &width);
area =2*( height+ width);

printf("Area of rectangle is = %.2lf", area);

return 0;
}
