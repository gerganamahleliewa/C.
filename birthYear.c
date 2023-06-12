#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int year,age;

	printf("Enter year:");
	scanf("%d",&year);
	printf("Enter your age:");
	scanf("%d",&age);

	int birthYear;
	birthYear = year - age;
	printf("You were born in %d", birthYear);

	return 0;
}
