#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

printf("ENter number:");
scanf_s("%d", &num);

 int rem = num % 10;
int d = (num/10) % 10;
num/=100;



printf("%d%d%d", rem,d,num);
return 0;
}
