#include <stdio.h>
#include <math.h>
int main() {


   int num,sum=0;
   printf("Enter number:");

   scanf("%d",&num);

for(int i=1;i<=num;++i)
{
    if(i%3==0 || i%5==0)
    {
        sum+=i;
    }
}
printf("Sum=%d",sum);
    return 0;
}
