#include <stdio.h>
#include <math.h>
int main() {

char ch;
int rem,sum=0,i=1;
printf("Enter character:");
scanf("%c",&ch);
    
//Convert it to decimal
printf("%d",ch);
    
while(ch!=0)
{
    //convert it from decimal to binary
    rem=ch%2;
    ch/=2;
    sum+=rem*i;
    i*=10;
}
printf("\nBinary:%d",sum);
    return 0;
}
