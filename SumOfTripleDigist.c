#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

printf("ENter number:");
scanf_s("%d", &num);

 int rem = num % 10;
int d = (num/10) % 10;
num=num/100;


int sum = rem + d + num;
printf("Sum=%d", sum);
return 0;
}
