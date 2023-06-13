#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, b, c;
printf("Enter a,b and c:");
scanf_s("%d %d %d", &a, &b, &c);

if (a > b && a > c)
{
	printf("%d is max", a);
}
else if (b > a && b > c)
{
	printf("%d is max", b);
}
else
{
	printf("%d is max", c);
}

return 0;
}
