#include <stdio.h>
#include <math.h>
int main() {

int num,rem,sum=0,i=0;
printf("Enter number:");
scanf("%d",&num);

while(num!=0)
{
rem=num%10;
num/=10;
sum+=rem*pow(2,i);
i++;
}
printf("%d",sum);
return 0;
}
