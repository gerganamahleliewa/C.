#include <stdio.h>

int main() {

int number1;
printf("Enter three numbers:");
scanf("%d",&number1);

int rem=number1%10;
int r=(number1/10)%10;
number1=number1/100;

if(number1<r && r<rem)
{
    printf("Ascending");
}
else
{
    printf("NOT Ascending");
}

return 0;
}
