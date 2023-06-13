#include <stdio.h>
#include <stdlib.h>

int main()
{
double priceForHour, sum;
int totalHours;

printf("Enter price for hour:");
scanf_s("%lf", &priceForHour);

printf("Enter total hours worked in a month:");
scanf_s("%d", &totalHours);

sum = priceForHour * totalHours;
printf("Salary for month=%.2lf", sum);

return 0;
}
