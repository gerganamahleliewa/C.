#include <stdio.h>
#include <math.h>
int main() {

int num,pow,sum=1;
printf("Enter number and power:");
scanf("%d %d",&num,&pow);

while(pow>0)
{
   sum*= num;
    pow--;
}
printf("Sum=%d",sum);
    return 0;
}
