#include <stdio.h>
#include <math.h>
int main() {


char alpha;
printf("Enter alphabet:");
scanf("%c",&alpha);

if(alpha>=97 && alpha<=122)
{
    printf("It is lowercase!");
}
if(alpha>=65 && alpha <=90)
{
    printf("It is uppercase!");
}
else if(alpha>=48 && alpha<=57)
{
    printf("It is digit!");
}
else{
    printf("It is symbol!");
}
    return 0;
}
