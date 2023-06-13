#include <stdio.h>
#include <stdlib.h>

int main()
{
int a1, d, num,an;
printf("Enter A1:");
scanf_s("%d", &a1);

printf("Enter Distance:");
scanf_s("%d", &d); 

printf("Enter Number of term:");
scanf_s("%d", &num);

an = a1 + (num - 1) * d;
printf("An=%d", an);

return 0;
}
