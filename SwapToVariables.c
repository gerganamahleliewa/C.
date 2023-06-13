#include <stdio.h>
#include <stdlib.h>

int main()
{

double temperature,fahrenheit;

printf("Enter temperature in Celsius:");
scanf("%lf", &temperature);

printf("Convert from Celsius in Fahrenheit:\n");
fahrenheit = temperature * 1.8 + 32;
printf("Temperature in Fahrenheit = %.2lf", fahrenheit);

return 0;
}
