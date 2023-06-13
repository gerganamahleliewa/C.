#include <stdio.h>
#include <stdlib.h>

int main()
{

int grades,sum=0;
for (int i = 0; i < 3; ++i)
{
	printf("Enter number:");
	scanf("%d", &grades);
	sum += grades;
}
double avg;
avg = sum / 3.0;
printf("Average=%.2lf", avg);

return 0;
}
