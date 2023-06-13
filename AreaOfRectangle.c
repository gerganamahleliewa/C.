#include <stdio.h>
#include <stdlib.h>

int main()
{

double height, width;
double area;

printf("Enter height:");
scnaf("%lf", &height);

printf("Enter width:");
scanf("%lf", &width);
area = height * width;

printf("Area of rectangle is = %.2lf", area);

return 0;
}
