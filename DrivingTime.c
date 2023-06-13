#include <stdio.h>
#include <stdlib.h>

int main()
{
int distance,speed;
double time;

printf("Enter distance in km:");
scanf_s("%d", &distance);

printf("Enter speed:");
scanf_s("%d", &speed);

time =(double) distance / speed;
printf("Time=%.2lf hours", time);

return 0;
}
