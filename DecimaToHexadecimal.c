#include <stdio.h>

int main()
{
  int number;
  
  printf("Enter decimal number:");
  
  //input from the user will be decimal, that is why is %d
  scanf("%d",&number);
  
  //print in hexadecimal, that is why is with %d
  printf("%x",number);
  
  return 0;
}
