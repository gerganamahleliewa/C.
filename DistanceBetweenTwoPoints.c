#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x1, y1,distance,x2,y2;

printf("Enter x and y for point A:");
scanf_s("%d %d", &x1, &y1);

printf("Enter x and y for point B:");
scanf_s("%d %d", &x2, &y2);

distance = sqrt(pow(x1 - x2,2 )+ pow(y1 - y2, 2));
printf("Distance=%d", distance);
return 0;
}
